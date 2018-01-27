//============================================================================
// Name        : HelloCpp.cpp
// Author      : LiwinLi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//#include "./../struct/LTStruct.h"
/*
#include "struct/LTStruct.h"
#include "struct/LTInitStruct.h"
#include "basic/BuildinTypes/BoolType.h"
#include "basic/initialization/CurlyBraceDelimitedList.h"
#include "basic/Constants/Constants.h"
*/
// #include "memory/ltmemory.h"
// #include "basic/static_assert/StaticAssert.h"

// #include "basic/Array/LTArray.h"
// #include "macro/LT-macro.h"
// #include "Class/Line.h" 
#include "Class/ClassTest.h"

#include <iostream>
using namespace std;

void LT_foo() {	
	void* tempPtr = NULL;
	*(int*)tempPtr = 1;
}

int main() {
    cout << "Hello, CPP" << endl;
	// test_struct_size();
	// init_struct();
	// testBoolType();
	// (void)testInitialization();
	// testConstantExpression();

	// testMemory();
	// foo(56);

	// testLTArray();
	// LT_foo();
	
	// LT_test_macro();
    // Line::testLine();
	// Line::testObjParameter();
    
    // class_test_funcWithObjparam();
    ClassTest_test();
	return 0;
}










