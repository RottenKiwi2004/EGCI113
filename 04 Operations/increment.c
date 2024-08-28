#include <stdio.h>
int main() {

    int x = 7, y = 4;

    x = x - y++;
    y = --y + 5;
    x = --x + ++y;

    printf("%d %d\n", x, y);

}