#include <dlfcn.h>
#include <stdio.h>
#include "functions.h"
#include <stdlib.h>


int main(int argc, char *argv[]) {
    char *(*func)();
    char buf[32];
    if (argc != 2) {
        fprintf(stderr, "Usage: runtimeLoader version");
        exit(1);
    }
    snprintf(buf, sizeof(buf), "libsamplelibrary.so.%s", argv[1]);
    void *lib = dlopen("libsamplelibrary.so", RTLD_NOW);
    if (!lib) {
        fprintf(stderr, "No library version found: %s\n", buf);
        exit(1);
    }
    printf("Version: %s\n", getVersion());
    for (int i=1; i<=5; ++i) {
        sprintf(buf, "function%d", i);
        func = dlsym(lib, buf);
        printf("%s\n", func());
    }
    return 0;
}
