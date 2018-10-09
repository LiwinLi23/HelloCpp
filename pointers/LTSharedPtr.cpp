//
//  LTSharedPtr.cpp
//  LT_Product
//
//  Created by 李涛 on 2018/10/9.
//  Copyright © 2018年 李涛. All rights reserved.
//

#include "LTSharedPtr.hpp"
#include <iostream>
#include <memory>

using namespace std;

void usedSharedPtr(void) {
    int a = 10;
    shared_ptr<int> sp1 = make_shared<int>(a);
    shared_ptr<int> sp2(sp1);
    cout << sp1.use_count() << ", " << sp2.use_count() << endl;
    cout << *sp1 << ", " << *sp2 << endl;
    
    int b, *pb;
    pb = &b;  b = 20;
    // shared_ptr<int> sp3 = pb;
    shared_ptr<int> sp3 = make_shared<int>(b);
    sp2 = sp3;
    cout << sp1.use_count() << ", " << sp3.use_count() << endl;
}
