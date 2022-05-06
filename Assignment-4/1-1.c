#include <stdio.h>

int main() {
    int X[100] = {0};
    int cnt = 0;
    while (1) {
        int N;
        scanf("%d", &N);
        if (N <= 0) break;
        int new = 0;
        int tmp = N;
        while (tmp > 0) {
            new = new * 10 + tmp % 10;
            tmp /= 10;
        }
        if (N == new) {
            X[cnt] = N;
            cnt++;
        }
    }

    for (int i = 0; i < cnt; i++) {
        for (int j = 0; j +i< cnt; j++) {
            if (X[j] < X[j + 1]) {
                int tmp = X[j];
                X[j] = X[j + 1];
                X[j + 1] = tmp;
            }
        }
    }

    for (int i = 0; i < cnt; i++) printf("%d ", X[i]);
    return 0;
}