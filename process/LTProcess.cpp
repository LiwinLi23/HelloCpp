//
//  LTProcess.cpp
//  LT_Product
//
//  Created by 李涛 on 2018/10/6.
//  Copyright © 2018年 李涛. All rights reserved.
//

#include "LTProcess.hpp"
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

using namespace std;

#define BUF_LEN         1024

void LTShell(void) {
    uint8_t cmdBuf[BUF_LEN];
    pid_t pid;
    int status;
    cout << "LT$: ";
    while (NULL != fgets((char*)cmdBuf, BUF_LEN, stdin)) {
        if ('\n' == cmdBuf[strlen((char*)cmdBuf) - 1]) {
            if ('\r' == cmdBuf[strlen((char*)cmdBuf) - 2])
                cout << "It's end by \\r\\n" << endl;
            
            cmdBuf[strlen((char*)cmdBuf) - 1] = 0;
        }
        
        if ((pid = fork()) < 0)
            cout << "fork error" << endl;
        else if (0 == pid) {        // child
            execlp((const char*)cmdBuf, (const char*)cmdBuf, NULL);
            exit(127);
        }
        
        if (waitpid(pid, &status, 0) < 0)
            cout << "Waitpid fail" << endl;
        
        cout << "LT$: ";
    }
    
    
    
}
