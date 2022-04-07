#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    int max_num = 0;
    int max_cnt = 0;
    int max_sum = 0;

    for (int i = N; i <= M; i++) {
        int index = i;
        int cnt = 1;
        int sum = 0;
        for (int j = 2; j <= i; j++) {
            int tmp = 0;
            while (index % j == 0) {
                index /= j;
                tmp++;
            }
            cnt *= tmp + 1;
            sum += tmp;
        }
        if (max_cnt < cnt) {
            max_cnt = cnt;
            max_num = i;
            max_sum = sum;
        }
    }
/*
 * 24
 * 12
 * 6
 * 3
 */
    printf("%d %d %d\n", max_num, max_cnt, max_sum);
    return 0;
}