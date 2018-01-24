/*
 * a.c
 *
 *  Created on: 2017年8月2日
 *      Author: litao
 */

// gcc -c a.c b.c  -c: Just only compile, don't link

extern int shared;

#if 0
int main() {
	int a = 100;
	reset(&a, &shared);
}
#endif
/*
litaodeMacBook-Pro:staticlink litao$ objdump -h -s -d a.o

a.o:	file format Mach-O 64-bit x86-64

Disassembly of section __TEXT,__text:
_main:
       0:	55 	pushq	%rbp
       1:	48 89 e5 	movq	%rsp, %rbp
       4:	48 83 ec 10 	subq	$16, %rsp
       8:	c7 45 fc 64 00 00 00 	movl	$100, -4(%rbp)
       f:	48 8d 45 fc 	leaq	-4(%rbp), %rax
      13:	48 8b 15 00 00 00 00 	movq	(%rip), %rdx
      1a:	48 89 d6 	movq	%rdx, %rsi
      1d:	48 89 c7 	movq	%rax, %rdi
      20:	b8 00 00 00 00 	movl	$0, %eax
      25:	e8 00 00 00 00 	callq	0 <_main+0x2A>
      2a:	b8 00 00 00 00 	movl	$0, %eax
      2f:	c9 	leave
      30:	c3 	retq
Sections:
Idx Name          Size      Address          Type
  0 __text        00000031 0000000000000000 TEXT
  1 __eh_frame    00000050 0000000000000038 DATA
Contents of section __text:
 0000 554889e5 4883ec10 c745fc64 00000048  UH..H....E.d...H
 0010 8d45fc48 8b150000 00004889 d64889c7  .E.H......H..H..
 0020 b8000000 00e80000 0000b800 000000c9  ................
 0030 c3                                   .
Contents of section __eh_frame:
 0038 14000000 00000000 017a5200 01781001  .........zR..x..
 0048 100c0708 90010000 34000000 1c000000  ........4.......
 0058 e0ffffff ffffffff 31000000 00000000  ........1.......
 0068 00040100 00000e10 86020403 0000000d  ................
 0078 06042c00 00000c07 08000000 00000000  ..,.............
 */

