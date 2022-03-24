#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    a = a / 100 % 10;
    b = b / 100 % 10;
    c = c / 100 % 10;

    ((a == b) && (b == c)) ? printf("T") : printf("");

    (((a == b) && (a != c)) || ((a == c) && (a != b)) || ((b == c) && (a != c))) ? printf("D") : printf(
            "");
    ((a != b) && (b != c) && (a != c)) ? printf("S") : printf("");

    return 0;
}