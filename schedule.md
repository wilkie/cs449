---
layout: page
title: Schedule
permalink: /schedule/
---

As always, keep up with the [University Academic Calendar](https://www.provost.pitt.edu/students/academic-calendar) for general important university dates.

Office hours for the instructor and TAs is listed at the [bottom of this page](#office-hours).

The schedule is always tentative. I may shift topics around.

{:.schedule}
| **M/W Section** /<br> **T/Th Section** | **Topic** |
|----------------------------------|-----------|
| M January    6 /<br> Th January 9 | Introduction / [Syllabus]({{site.baseurl}}/syllabus) / What is Systems? / Starting Data Representation |
|              | **Introduction, What is Systems?** [[pdf]({{site.baseurl}}/slides/01_CS449_Introduction.pdf)] [[pptx]({{site.baseurl}}/slides/01_CS449_Introduction.pptx)]<br>**Data Representation** [[pdf]({{site.baseurl}}/slides/02_CS449_Data-Representation.pdf)] [[pptx]({{site.baseurl}}/slides/02_CS449_Data-Representation.pptx)] |
| W January    8 /<br> T January 14 | Data Representation |
|              | **Bitwise and Logical Operations, Floating Point** [[pdf]({{site.baseurl}}/slides/03_CS449_Data-Representation-II.pdf)] [[pptx]({{site.baseurl}}/slides/03_CS449_Data-Representation-II.pptx)]<br><br>Other Resources: <br>[What Every Programmer Should Know About Floating Point](https://floating-point-gui.de/basic/)<br>[IEEE-754 Floating Point Converter](https://www.h-schmidt.net/FloatConverter/)<br><br>Examples: [AbsTest.java]({{site.baseurl}}/examples/data-representation/AbsTest.java) \| [abs.c]({{site.baseurl}}/examples/data-representation/abs.c) \| [FloatTest.java]({{site.baseurl}}/examples/data-representation/FloatTest.java) \| [broken_math.c]({{site.baseurl}}/examples/data-representation/broken_math.c) |
| M January    13 /<br> Th January 16 | Floating Point / Start Intro to C |
|              | |
| W January    15 /<br> T January 21 | Introduction to C |
|              | **Introduction to C** [[pdf]({{site.baseurl}}/slides/04_CS449_Introduction-to-C.pdf)] [[pptx]({{site.baseurl}}/slides/04_CS449_Introduction-to-C.pptx)] |
| M January    20 | **No Class: Holiday** |
| | |
| W January    22 /<br> Th January 23 | Introduction to Memory |
|              | **Introduction to Memory, Pointers, Arrays, Strings** [[pdf]({{site.baseurl}}/slides/05_CS449_Introduction-to-Memory.pdf)] [[pptx]({{site.baseurl}}/slides/05_CS449_Introduction-to-Memory.pptx)] |
| M January    27 /<br> T January 28 | Introduction to Memory II |
|              | Continuing to look at arrays, strings, and dynamic structures. |
| W January    29 /<br> Th January 30 | Studying Real-World C |
|              | We already know around 90% of the C language. With this knowledge, we will take a casual look at one of the most studied C codebases in the world. This includes its conventions, style, and bugs.<br><br>Content Warning: Some cartoony violence and pixelated satanic imagery are very very briefly visible.<br><br>**DOOM: A Case Study** [[pdf]({{site.baseurl}}/slides/055_CS449_DOOM-A-Case-Study.pdf)] [[pptx]({{site.baseurl}}/slides/055_CS449_DOOM-A-Case-Study.pptx)] |
| M February   3 /<br> T February 4 | Memory Management: Overview |
|              | Looking at the problems in solving memory allocation. And linked lists.<br><br>**Allocations, Linked Lists, malloc** [[pdf]({{site.baseurl}}/slides/06_CS449_Memory-Management.pdf)] [[pptx]({{site.baseurl}}/slides/06_CS449_Memory-Management.pptx)] |
| W February   5 /<br> Th February 6 | Memory Management: The Gritty Reality |
|              | Looking at how malloc and free can be implemented. |
| M February  10 /<br> T February 11 | Buddy Allocation / Introduction to x86 Assembly |
|              | The basics of x86 and the C ABI<br><br>**Introduction to x86** [[pdf]({{site.baseurl}}/slides/07_CS449_Introduction-to-x86.pdf)] [[pptx]({{site.baseurl}}/slides/07_CS449_Introduction-to-x86.pptx)] |
| W February  12 /<br> Th February 13 | x86 Assembly |
|              | Looking at control patterns in x86 and making use of the C ABI<br><br>**Investigating the Code** [[pdf]({{site.baseurl}}/slides/08_CS449_Investigating-the-Code.pdf)] [[pptx]({{site.baseurl}}/slides/08_CS449_Investigating-the-Code.pptx)] |
|              | |
| M February  17 /<br> T February 18 | Debugging: Being a code detective |
|              | Some extra reading about real world uses of the same tools to [creating a profiling tool](https://jvns.ca/blog/2018/01/09/resolving-symbol-addresses/) by Julia Evans |
| W February  19 /<br> Th February 20 | Creating Chaos: Buffer overflows and other monsters |
|              | Smashing the stack, and other fun things which are not always fun for others.<br><br>**Buffer Overflows** [[pdf]({{site.baseurl}}/slides/09-buffer-overflow.pdf)] [[pptx]({{site.baseurl}}/slides/09-buffer-overflow.pptx)] |
|              | |
| M February  24 /<br> T February 25 | Spillover day and Review (time permitting) |
|              | Stuff provided on exam: The C ABI specifics, what many of the assembly instructions mean (know the basics), the bias and lengths of bitfields of particular IEEE754 values (know how to deal with them). |
| W February  26 /<br> Th February 27 | **MIDTERM** Regular time and place. Closed-book / No tools or calculators. |
|              | |
| M March      2 /<br> T March     3 | Linking and Loading |
|              | **How Programs Are Made** [[pdf]({{ site.baseurl }}/slides/10_CS449_How-Programs-Are-Made.pdf)] [[pptx]({{ site.baseurl }}/slides/10_CS449_How-Programs-Are-Made.pptx)] |
| W March      4 /<br> Th March     5 | |
|              | |
| M March     9 /<br> T March 10 | **No Class: Spring Break** |
|              | |
| W March     11 /<br> Th March 12 | **No Class: Spring Break** |
|              | |
| F March     13 | **No Recitations: Spring Break** |
|              | |
| M March     16 /<br> T March    17 | **No Class: Chaos** |
|              | |
| W March     18 /<br> Th March   19 | **No Class: Chaos** |
|              | |
| M March     23 /<br> T March    24 | Scheduling and Interrupts |
|              | **How Programs Are Managed** [[mp4](https://video.449.wilkiepedia.org/videos/watch/ec0d2d5d-9bd2-42a9-a18e-5f375bb12029)] [[pdf]({{ site.baseurl }}/slides/11_CS449_How-Programs-Are-Managed.pdf)] [[pptx]({{site.baseurl}}/slides/11_CS449_How-Programs-Are-Managed.pptx)] |
| W March     25 /<br> Th March   26 | Process Creation and Concurrency |
|              | **How Programs Reproduce** [[mp4](https://video.449.wilkiepedia.org/videos/watch/3d1aaf32-9638-4459-ae1a-ae2159518b92)] [[pdf]({{site.baseurl}}/slides/12_CS449_How-Programs-Reproduce.pdf)] [[pptx]({{site.baseurl}}/slides/12_CS449_How-Programs-Reproduce.pptx)] |
| M March     30 /<br> T March    31 | |
|              | |
| W April      1 /<br> Th April    2 | |
|              | |
| M April      6 /<br> T April     7 | |
|              | |
| W April      8 /<br> Th April    9 | |
|              | |
| M April     13 /<br> T April    14 | |
|              | |
| W April     15 /<br> Th April   16 | |
|              | |
| Th April 23  | **8AM FINAL CL324** for Monday/Wednesday Section (CS 26790) |
| Sa April 25  | **8AM FINAL FK125** for Tuesday/Thursday Section (CS 26745) |

## Office Hours

**Note**: Not valid during finals week!

### Gordon Lu

**Friday**: 2:00PM - 3:00PM, 4:00PM - 6:00PM

**E-Mail**: gol6@pitt.edu

**Virtual Office**: TBD

### Alex Conway

**Wednesday**: 10:00AM - 12:00PM

**Friday**: 12:00PM - 1:00PM

**E-Mail**: lac216@pitt.edu

**Virtual Office**: TBD

### Jon Rutkauskas

**Tuesday**: 10:00AM - 11:30AM

**Thursday**: 12:00PM - 1:30PM

**E-Mail**: jsr68@pitt.edu

**Virtual Office**: <https://pitt.zoom.us/j/4951906131>

### Zack Hable

**Tuesday**: 1:00PM - 3:00PM

**Friday**: 11:00AM - 12:00PM

**E-Mail**: zack.hable@pitt.edu

**Virtual Office**: TBD

### Instructor

**Wednesday**: 1:30PM - 3:30PM **UPDATED**

**Friday**: 1:00PM - 2:00PM

**Location**: 5413 Sennott Square

**Virtual Office**: Direct Message on Riot, Please. <https://chat.449.wilkiepedia.org>

**Other**: By appointment. <mailto:dwilk@cs.pitt.edu> Please place "CS449" in the subject line.
