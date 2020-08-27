#include <dlfcn.h>
#include <stdio.h>
#include "functions.h"



int main(int argc, char *argv[]) {
    char *(*func)();
    char buf[32];
    void *lib = dlopen("libsamplelibrary.so", RTLD_NOW);
    for (int i=1; i<=5; ++i) {
        sprintf(buf, "function%d", i);
        func = dlsym(lib, buf);
        printf("%s\n", func());
    }
    return 0;
}
