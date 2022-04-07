#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int max_num = 0;
    int max_cnt = 0;
    while (N--) {
        int M;
        scanf("%d", &M);
        int cnt = 0;
        for (int i = 1; i <= M; i++) {
            if (M % i == 0) {
                printf("%d ", i);
                cnt++;
            }
        }
        if (max_cnt < cnt) {
            max_cnt = cnt;
            max_num = M;
        }
        printf("%d\n", cnt);
    }
    printf("%d\n", max_num);
    return 0;
}