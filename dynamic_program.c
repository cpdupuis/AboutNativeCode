#include <stdio.h>
#include <dlfcn.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int libversion = 1;

    if (argc >= 2) {
        if (strncmp(argv[1], "2", 1) == 0) {
            libversion = 2;
        }
    }

    char filename[64];
    snprintf(filename, sizeof filename, "library.so.%d", libversion);
    
}