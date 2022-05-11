#include <stdio.h>

int main() {
    int N;
    int A[50];
    int cnt[50];
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < N; i++) {
        cnt[i] = 1;
        for (int j = i + 1; j < N; j++) {
            if (A[i] == A[j]) {
                cnt[i]++;
                A[j] = 0;
            }
        }
    }
    for (int i = 0; i < N; i++) {
        if (A[i] != 0) printf("%d %d\n", A[i], cnt[i]);
    }

    return 0;
}