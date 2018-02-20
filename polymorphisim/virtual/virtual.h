#include <iostream>

using namespace std;

class Virtual;

class Base {
public:
    virtual void display() {
        cout << "Base::display()" << endl;
    }
};

class Derived {
public:
    virtual Virtual* display() {
        cout << "Derived::display()" << endl;
        return NULL;
    }
};

class Virtual {
public:
    static void test() {
        Base* pb = (Base*)new Derived();
        cout << "Virtual func don't care with return type"<< endl;
        pb->display();
        
        pb->Base::display();
    }
};