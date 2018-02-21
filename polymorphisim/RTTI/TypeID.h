#include <iostream>
#include <typeinfo>

using namespace std;

class Base {
public:
    virtual ~Base() {}
};
class Derived : public Base {};

class TypeID {
public:
    static void bar(Base* bp) {
        const type_info &info1 = typeid(bp);
        const type_info &info2 = typeid(*bp);
        cout << info1.name() << ", " << info2.name()<< endl;
        if (typeid(Base) == info1)
            cout << "Info1 is base type" << endl;

        if (typeid(Base) == info2)
            cout << "Info2 is base type" << endl;        
    }

    static void test() {
        // Base b; Derived d;
        // bar(&b); bar(&d);

        const type_info &info1 = typeid(3 + 5);
        const type_info &info2 = typeid(signed int);
        cout << info1.name() << ", " << info2.name()<< endl;
    }
};



