#include <stdio.h>

int main() {
    int N, reverse, gap;
    scanf("%d", &N);
    reverse = N / 1000 % 10 + N / 100 % 10 * 10 + N / 10 % 10 * 100 + N % 10 * 1000;
    gap = N - reverse;
    (gap < 0) ? printf("%d\n", -gap) : printf("%d\n", gap);

    return 0;
}