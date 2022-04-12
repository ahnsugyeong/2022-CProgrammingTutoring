#include <stdio.h>

int main() {
    int max_cnt = 0, min_cnt = 0;
    int max_N = 0, min_N = 0;
    while (1) {
        int N;
        scanf("%d", &N);
        if (N <= 1) break;
        int N_cnt = 0;
        int tmp = N;
        for (int i = 2; i <= N; i++) {
            int cnt = 0;
            while (tmp % i == 0) {
                tmp /= i;
                cnt++;
            }
            if (cnt > 0) {
                N_cnt++;
                printf("%d %d ", i, cnt);
            }
        }

        if (max_cnt == 0 && min_cnt == 0) {
            max_cnt = N_cnt;
            min_cnt = N_cnt;
            max_N = N;
            min_N = N;
        }
        if (N_cnt > max_cnt) {
            max_cnt = N_cnt;
            max_N = N;
        } else if (N_cnt == max_cnt) {
            if (max_N > N) {
                max_cnt = N_cnt;
                max_N = N;
            }
        }
        if (N_cnt < min_cnt) {
            min_cnt = N_cnt;
            min_N = N;
        } else if (N_cnt == min_cnt) {
            if (min_N < N) {
                min_cnt = N_cnt;
                min_N = N;
            }
        }
        printf("\n");
    }
    printf("%d %d\n", max_N, min_N);
    return 0;
}