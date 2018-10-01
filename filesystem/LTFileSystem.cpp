//
//  LTFileSystem.cpp
//  LT_Product
//
//  Created by 李涛 on 2018/9/28.
//  Copyright © 2018年 李涛. All rights reserved.
//

#include "LTFileSystem.hpp"
#include <iostream>
#include <dirent.h>

using namespace std;

void LTListPath(const char* path) {
    if (!path)
        return;
    
    DIR* targetDir;
    if (!(targetDir = opendir(path)))
        return;
    
    struct dirent* dirEntry;
    while ((dirEntry = readdir(targetDir)))
        cout << dirEntry->d_name << endl;
    
    closedir(targetDir);
}
