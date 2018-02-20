#include "Base.h"
#include "Derived.h"

using namespace std;

void test() {
    Base* pb = (Base*)new Derived();
    pb->display();
}