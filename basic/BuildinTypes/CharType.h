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

    cout << "Values outside that range [0, 127] stored in a plain char can \
             lead to suble portability problems" << endl;
    cout << "It's implementation-defined whether a plain char is considered \
             signed or unsigned, This opens posibility for some nasty surprises\
              and implementation dependencies." << endl;
}


#endif /* BASIC_BUILDINTYPES_CHARTYPE_H_ */