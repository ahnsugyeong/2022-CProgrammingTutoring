#include <stdio.h>

int main() {
    int a, b, c, mid;
    scanf("%d %d %d", &a, &b, &c);
    (a > b) && (b > c) || (c > b) && (b > a) ? mid = b : printf("");
    (b > a) && (a > c) || (c > a) && (a > b) ? mid = a : printf("");
    (a > c) && (c > b) || (b > c) && (c > a) ? mid = c : printf("");

    printf("%d\n", mid);

    return 0;
}