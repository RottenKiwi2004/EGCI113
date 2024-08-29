#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int hour = n / 3600;
    n %= 3600;
    int minute = n / 60;
    int second = n % 60;
    printf("%02d:%02d:%02d\n", hour, minute, second);
}