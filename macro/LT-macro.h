#ifndef _MACRO_LT_MACTRO_H
#include <stdio.h>

#define STRING(x)	#x
/*
#define DEF_FUNC_OPER(rettype, funcname, type1, arg1, oper, type2, arg2) \
	rettype LT_OPER_##funcname(type1 arg1, type2 arg2) {				 \
		return arg1##oper##arg2;										 \
	}																	 \

DEF_FUNC_OPER(int, add, int, arg1, +, int, arg2)
*/
void LT_test_macro() {
	const char* str = STRING(# is used switch to string);
	printf("%s\n", str);

	// int result = LT_OPER_add(1, 1);
	// printf("Result: %d", result);
}

#endif
