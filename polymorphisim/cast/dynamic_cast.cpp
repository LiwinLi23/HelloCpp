#include <iostream>

using namespace std;

class A {
public:
    virtual ~A() {}
};

class B : virtual public A {
public:
    virtual ~B() {}
};

class C : public B {
public: 
    virtual ~C() {}
};

class D : public B, virtual public A {
    virtual ~D() {}
};

int main() {
    A* aPtr = new B();
    if (B* bPtr = dynamic_cast<B*>(aPtr)) {
        cout << "Yes, dynamic cast successfully" << endl;
    } else {
        cout << (long)bPtr << endl;
        cout << "Sorry, cast fail" << endl;
    }
	
    return 0;
}
