/*
 * b.c
 *
 *  Created on: 2017年8月2日
 *      Author: litao
 */
int shared = 1;

void reset(int* a, int* b) {
	*a = *b;
}

/*
litaodeMacBook-Pro:staticlink litao$ objdump -h -s -d b.o

b.o:	file format Mach-O 64-bit x86-64

Disassembly of section __TEXT,__text:
_reset:
       0:	55 	pushq	%rbp
       1:	48 89 e5 	movq	%rsp, %rbp
       4:	48 89 7d f8 	movq	%rdi, -8(%rbp)
       8:	48 89 75 f0 	movq	%rsi, -16(%rbp)
       c:	48 8b 45 f0 	movq	-16(%rbp), %rax
      10:	8b 10 	movl	(%rax), %edx
      12:	48 8b 45 f8 	movq	-8(%rbp), %rax
      16:	89 10 	movl	%edx, (%rax)
      18:	90 	nop
      19:	5d 	popq	%rbp
      1a:	c3 	retq
Sections:
Idx Name          Size      Address          Type
  0 __text        0000001b 0000000000000000 TEXT
  1 __data        00000004 000000000000001c DATA
  2 __eh_frame    00000050 0000000000000020 DATA
Contents of section __text:
 0000 554889e5 48897df8 488975f0 488b45f0  UH..H.}.H.u.H.E.
 0010 8b10488b 45f88910 905dc3             ..H.E....].
Contents of section __data:
 001c 01000000                             ....
Contents of section __eh_frame:
 0020 14000000 00000000 017a5200 01781001  .........zR..x..
 0030 100c0708 90010000 34000000 1c000000  ........4.......
 0040 e0ffffff ffffffff 1b000000 00000000  ................
 0050 00040100 00000e10 86020403 0000000d  ................
 0060 06041600 00000c07 08000000 00000000  ................
 */

