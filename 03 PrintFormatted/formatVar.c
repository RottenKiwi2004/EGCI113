#include <stdio.h>

int main() {
    int a = 432;
    double b = 3.14159265359;

    printf("Hello%8dHello\n", a);
    printf("Hello%-8dHello\n", a);
    printf("Hello%08dHello\n", a);
    printf("Hello%8.3lfHello\n", b);
}