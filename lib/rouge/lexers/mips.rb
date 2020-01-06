# -*- coding: utf-8 -*- #
# frozen_string_literal: true

# This is licensed by wilkie under the MIT license, same as Rouge itself
# MIT license.  See http://www.opensource.org/licenses/mit-license.php

module Rouge
  module Lexers
    class MIPS < RegexLexer
      tag 'mips'

      title "MIPS"
      desc "MIPS Assembler"

      ws = %r((?:\s|;.*?\n/)+)
      id = /[a-zA-Z_][a-zA-Z0-9_]*/

      def self.keywords
        @keywords ||= Set.new %w(
        add
        addi
        addiu
        addu
        and
        andi
        beq
        blez
        bne
        bgtz
        div
        divu
        j
        jal
        jr
        lb
        lbu
        lhu
        lui
        lw
        mfhi
        mthi
        mflo
        mtlo
        mfc0
        mult
        multu
        nor
        xor
        or
        ori
        sb
        sh
        slt
        slti
        sltiu
        sltu
        sll
        srl
        sra
        sub
        subu
        sw

        syscall

        la
        li
        move
        clear
        b
        bal
        bgt
        blt
        bge
        ble
        bgtu
        beqz
        beq
        bne

        mul
        rem

        jalr
        not
        nop
        )
      end

      def self.keywords_type
        @keywords_type ||= Set.new %w(
          dc ds dcb
        )
      end

      def self.reserved
        @reserved ||= Set.new %w(
          include abort file app-file asciz balign comm data text def desc dim double eject else endef endif equ extern fill global globl hword ident if int irp irpc lcomm lflags ln line list long macro nolist octa org p2align psize quad rept sbttl scl set short single size space stab(?:d s n) string tag title type val align section byte word dword ascii asciiz
        )
      end

      def self.builtins
        @builtins ||=Set.new %w(
          r0 r1 r2 r3 r4 r5 r6 r7 r8 r9 r10 r11 r12 r13 r14 r15 r16 r17 r18 r19
          r20 r21 r22 r23 r24 r25 r26 r27 r28 r29 r30 r31

          $0 $1 $2 $3 $4 $5 $6 $7 $8 $9 $10 $11 $12 $13 $14 $15 $16 $17 $18 $19
          $20 $21 $22 $23 $24 $25 $26 $27 $28 $29 $30 $31

          zero

          at

          v0 v1

          a0 a1 a2 a3

          t0 t1 t2 t3 t4 t5 t6 t7 t8 t9

          s0 s1 s2 s3 s4 s5 s6 s7

          k0 k1

          gp sp fp

          ra
        )
      end

      start { push :expr_bol }

      state :expr_bol do
        mixin :inline_whitespace
        rule(//) { pop! }
      end

      state :inline_whitespace do
        rule /[\s\t\r]+/, Text
      end

      state :whitespace do
        rule /\n+/m, Text, :expr_bol
        rule %r(#(\\.|.)*?\n), Comment::Single, :expr_bol
        mixin :inline_whitespace
      end

      state :root do
        rule(//) { push :statements }
      end

      state :statements do
        mixin :whitespace
        rule /"/, Str, :string
        rule /#/, Name::Decorator
        rule /^\.?[a-zA-Z0-9_]+:?/, Name::Label
        rule /\.[bswl]\s/i, Name::Decorator
        rule %r('(\\.|\\[0-7]{1,3}|\\x[a-f0-9]{1,2}|[^\\'\n])')i, Str::Char
        rule /\$[0-9a-f]+/i, Num::Hex
        rule /@[0-8]+/i, Num::Oct
        rule /%[01]+/i, Num::Bin
        rule /\d+/i, Num::Integer
        rule %r([*~&+=\|?:<>/-]), Operator
        rule /\\./, Comment::Preproc
        rule /[(),.]/, Punctuation
        rule /\[[a-zA-Z0-9]*\]/, Punctuation

        rule id do |m|
          name = m[0]

          if self.class.keywords.include? name.downcase
            token Keyword
          elsif self.class.keywords_type.include? name.downcase
            token Keyword::Type
          elsif self.class.reserved.include? name.downcase
            token Keyword::Reserved
          elsif self.class.builtins.include? name.downcase
            token Name::Builtin
          elsif name =~ /[a-zA-Z0-9]+/
            token Name::Variable
          else
            token Name
          end
        end
      end

      state :string do
        rule /"/, Str, :pop!
        rule /\\([\\abfnrtv"']|x[a-fA-F0-9]{2,4}|[0-7]{1,3})/, Str::Escape
        rule /[^\\"\n]+/, Str
        rule /\\\n/, Str
        rule /\\/, Str # stray backslash
      end
    end
  end
end
