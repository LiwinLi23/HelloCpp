//
//  LTErrors.cpp
//  LT_Product
//
//  Created by 李涛 on 2018/10/7.
//  Copyright © 2018年 李涛. All rights reserved.
//

#include "LTErrors.hpp"
#include <stdio.h>
#include <string.h>
#include <errno.h>

void demoError(void) {
    fprintf(stderr, "EAccess: %s\n", strerror(EACCES));
    errno = ENOENT;
    perror("LT");
}
