#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a + b + c >= 270) printf("A\n");
    else if (a + b + c >= 240) printf("B\n");
    else if (a + b + c >= 210) printf("C\n");
    else if (a + b + c >= 180) printf("D\n");
    else printf("F\n");

    if (a < b && b < c) {
        printf("max: %d\n", c);
        printf("min: %d\n", a);
    } else if (a < c && c < b) {
        printf("max: %d\n", b);
        printf("min: %d\n", a);
    } else if (c < b && b < a) {
        printf("max: %d\n", a);
        printf("min: %d\n", c);
    } else if (c < a && a < b) {
        printf("max: %d\n", b);
        printf("min: %d\n", c);
    } else if (b < a && a < c) {
        printf("max: %d\n", c);
        printf("min: %d\n", b);
    } else if (b < c && c < a) {
        printf("max: %d\n", a);
        printf("min: %d\n", b);
    }

    return 0;
}