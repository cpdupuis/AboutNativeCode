#include <stdio.h>

char* getMessageFromOtherFile(int);

int main(int argc, char *argv[]) {
    printf("Hello World\n");
    for (int i=0; i<3; ++i) {
        printf("Message: %s\n", getMessageFromOtherFile(i));
    }
    return 0;
}
