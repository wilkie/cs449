/* Compile with: gcc -o symbols a.c b.c */

/* Use: gdb -batch -ex "disassemble/rs main" symbols */

void p2(void);

int main(void) {
  p2();
  return 0;
}
