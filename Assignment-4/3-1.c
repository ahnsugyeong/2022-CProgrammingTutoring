#include <stdio.h>

int main() {
    int A[20];
    for (int i = 1; i <= 20; i++) A[i - 1] = i;

    int M;
    scanf("%d", &M);

    int tmp = A[19];
    for (int i = 18; i >= 20 - M; i--) {
        A[i + 1] = A[i];
    }
    A[20 - M] = tmp;

    for (int i = 0; i < 20; i++) printf("%d ", A[i]);

    return 0;
}
