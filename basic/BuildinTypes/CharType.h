#ifndef BASIC_BUILDINTYPES_CHARTYPE_H_
#define BASIC_BUILDINTYPES_CHARTYPE_H_

#include <iostream>
using namespace std;

void testCharType(void) {
    char c; signed char sc; unsigned char uc;

    char* pc            = &uc;
    signed char* psc    = pc;
    unsigned char* puc  = pc;
    psc                 = puc;
}


#endif /* BASIC_BUILDINTYPES_CHARTYPE_H_ */