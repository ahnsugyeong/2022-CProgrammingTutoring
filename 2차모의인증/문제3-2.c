#include <stdio.h>

int main() {
    int N;
    int x[100] = {0};
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &x[i]);
    }

    int len[100];
    int tmp = 1;
    int cnt = 0;

    for (int i = 0; i < N - 1; i++) {
        if (x[i] * x[i + 1] < 0) tmp++;
        else {
            len[cnt++] = tmp;
            tmp = 1;
        }
    }

    len[cnt++] = tmp;

    int max = 0;
    for (int i = 0; i < cnt; i++) {
        if (max < len[i]) max = len[i];
    }
    printf("%d\n", max);


    // 해당 부분 찾기
    int start = 0, end = 0;
    for (int i = 0; i < N - 1; i++) {
        if (x[i] * x[i + 1] < 0) {
            tmp++;
            end++;
        } else {
            if (tmp == max) {
                break;
            }
            start = end + 1;
            end++;
            tmp = 1;
        }
    }

    for (int i = start; i <= end; i++) {
        printf(" %d", x[i]);
    }


    return 0;
}