#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

#define BUFFER_SIZE     100

#if 0
int main(int argc, char* argv[]) {
    if (argc < 1)
        return -1;

    FILE* fileHandle = fopen(argv[1],"r");
    if (NULL != fileHandle) {
        char* memPtr = (char*)malloc(BUFFER_SIZE);
        if (NULL != memPtr) {
            memset(memPtr, 0, BUFFER_SIZE);
            size_t realSize = fread(memPtr, 1, 1024, fileHandle);
            cout << "Actual read size: " << realSize << endl;
            printf("%s", memPtr);
            free(memPtr);
        }        
        
        fclose(fileHandle);
    }

    return 0;
}
#endif
