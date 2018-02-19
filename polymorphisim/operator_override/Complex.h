//#program one
#include <iostream>

using namespace std;

#define IS_USE_MEMBER_OVERRIDE      0

class LTComplex {
public:
    LTComplex(double r = 0.0, double i = 0.0) : mReal(r), mImag(i) {
        cout << "LTComplex constructor: " << r << "," << i << endl;
    }
    #if (IS_USE_MEMBER_OVERRIDE)
    LTComplex operator+ (const LTComplex &c2) const;
    LTComplex operator- (const LTComplex &c2) const;
    #else
    friend LTComplex  operator+ (const LTComplex &c1, const LTComplex &c2);
    friend LTComplex  operator- (const LTComplex &c1, const LTComplex &c2);
    friend LTComplex& operator++(LTComplex &c1);
    friend LTComplex  operator++(LTComplex &c1, int);
    #endif

    friend ostream& operator<< (ostream &out, const LTComplex &c);
    void display() const;
    static void test() {
        LTComplex c1(5, 4), c2(2, 10), c3;
        cout << "c1: "; c1.display();
        cout << "c2: "; c2.display();
        c3 = c1 + c2;
        cout << "c3: "; c3.display();
        cout << "c3: " << c3 << endl;
        c3++;
        cout << "c3: " << c3 << endl;
    }

private:
    double mReal;
    double mImag;
};

#if (IS_USE_MEMBER_OVERRIDE)
LTComplex LTComplex::operator+ (const LTComplex &c2) const {
    return LTComplex(mReal + c2.mReal, mImag + c2.mImag);
}

LTComplex LTComplex::operator- (const LTComplex &c2) const {
    return LTComplex(mReal - c2.mReal, mImag - c2.mImag);
}
#else
LTComplex operator+ (const LTComplex &c1, const LTComplex &c2) {
    return LTComplex(c1.mReal + c2.mReal, c1.mImag + c2.mImag);
}

LTComplex operator- (const LTComplex &c1, const LTComplex &c2) {
    return LTComplex(c1.mReal - c2.mReal, c1.mImag - c2.mImag);
}

LTComplex& operator++ (LTComplex &c1) {
    ++c1.mReal;
    return c1;
} 

LTComplex operator++ (LTComplex &c1, int) {
    LTComplex c = c1;
    ++c1;
    return c;
} 
#endif

ostream& operator<< (ostream &out, const LTComplex &c) {
    out << c.mReal << ", " << c.mImag << endl;
    return out;
}

void LTComplex::display() const {
    cout << mReal << ", " << mImag << endl;
}










