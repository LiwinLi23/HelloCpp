#ifndef BASIC_BUILDINTYPES_CHARTYPE_H_
#define BASIC_BUILDINTYPES_CHARTYPE_H_

#include <iostream>
using namespace std;

void printASCII();

void testCharType(void) {
    char c; 
    signed char sc   = -160; 
    unsigned char uc = sc;
    cout << sc << ", " << uc << endl;

    // char* pc            = &uc;
    // signed char* psc    = pc;
    // unsigned char* puc  = pc;
    // psc                 = puc;

    cout << "Values outside that range [0, 127] stored in a plain char can \
             lead to suble portability problems" << endl;
    cout << "It's implementation-defined whether a plain char is considered \
             signed or unsigned, This opens posibility for some nasty surprises\
              and implementation dependencies." << endl;

    printASCII();
}

void printASCII() {
    for (int i = 0; i < 255; ++i) {
        cout << "char[" << i << "]: " << static_cast<char>(i);
        if (i % 7)
            cout << ", ";
        else
            cout << endl;
    }
}


#endif /* BASIC_BUILDINTYPES_CHARTYPE_H_ */











