#include <stdio.h>

int main() {
    int A[20];
    for (int i = 1; i <= 20; i++) A[i - 1] = i;

    int F, R, M;
    scanf("%d %d %d", &F, &R, &M);

    int tmp = A[R];
    for (int i = R - 1; i >= R - M; i--) {
        A[i + 1] = A[i];
    }
    A[R - M + 1] = tmp;

    for (int i = 0; i < 20; i++) printf("%d ", A[i]);


    return 0;
}