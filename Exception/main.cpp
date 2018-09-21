//
//  main.cpp
//  LT_Product
//
//  Created by 李涛 on 2018/9/12.
//  Copyright © 2018年 李涛. All rights reserved.
//

#include <iostream>
using namespace std;

void throwExceptionFun(void) {
    cout << "+ throwExceptionFunc()" << endl;
    throw -1;
    
    cout << "- throwExceptionFunc()" << endl;
}

int main(int argc, const char * argv[]) {
    try {
        throwExceptionFun();
    } catch (int e) {
        cout << "Catched exception: " << e << endl;
    }
    
    return 0;
}
