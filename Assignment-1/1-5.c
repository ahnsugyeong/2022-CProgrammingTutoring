#include <stdio.h>

int main() {
    int N, a, b, c, min;
    scanf("%d", &N);
    a = N % 10;
    b = N / 10 % 10;
    c = N / 100 % 10;

    (a < b) && (a < c) ? min = a : printf("");
    (b < a) && (b < c) ? min = b : printf("");
    (c < a) && (c < b) ? min = c : printf("");

    printf("%d\n", min);

    return 0;
}