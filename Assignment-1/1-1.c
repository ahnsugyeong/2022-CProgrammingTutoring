#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    !(N % 3) && (N % 5) && (N % 15) ? printf("%d is a multiple of 3.\n", N) : printf("");
    (N % 3) && !(N % 5) && (N % 15) ? printf("%d is a multiple of 5.\n", N) : printf("");
    !(N % 15) ? printf("%d is a multiple of 15.\n", N) : printf("");
    (N % 3) && (N % 5) && (N % 15) ? printf("%d is a multiple of %d.\n", N, N) : printf("");
    return 0;
}