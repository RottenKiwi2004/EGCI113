#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n % 4 != 0) {
        printf("No\n");
    }
    else if (n % 100 != 0) {
        printf("Yes\n");
    }
    else if (n % 400 != 0) {
        printf("No\n");
    }
    else {
        printf("Yes\n");
    }
}