#include <dlfcn.h>
#include <stdio.h>
#include "functions.h"
#include <stdlib.h>


int main(int argc, char *argv[]) {
    char *(*func)();
    char buf[32];
    if (argc != 2) {
        fprintf(stderr, "Usage: runtimeLoader version\n");
        exit(1);
    }
    snprintf(buf, sizeof(buf), "libsamplelibrary.so.%s", argv[1]);
    printf("Opening library %s\n", buf);
    void *lib = dlopen(buf, RTLD_NOW);
    if (!lib) {
        fprintf(stderr, "No library version found: %s\n", buf);
        exit(1);
    }
    func = dlsym(lib, "getVersion");
    printf("Version: %s\n", func());
    for (int i=1; i<=5; ++i) {
        sprintf(buf, "function%d", i);
        func = dlsym(lib, buf);
        printf("%s\n", func());
    }
    return 0;
}
