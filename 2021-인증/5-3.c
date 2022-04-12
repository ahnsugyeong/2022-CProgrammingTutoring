#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int len = 0;
    int max_len = 0;
    int last = 0;
    int tmp = 0;
    int max, min;
    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);

        if (i == 0) {
            max = num;
            min = num;
        }
        if (max < num) max = num;
        if (min > num) min = num;

        int cnt = 0;
        for (int j = 1; j <= num; j++) {
            if (num % j == 0) cnt++;
        }
        if (num > 0 && num < 100 && cnt == 2) {   //소수!!
            len++;
            tmp = num;
        } else {
            if (max_len < len) {
                max_len = len;
                last = tmp;
            }
            len = 0;
        }
    }
    if (max_len == 0) {
        printf("0\n");
    } else {
        printf("%d\n", max_len);
        printf("%d\n", last);
        printf("%d %d\n", max, min);
    }
    return 0;
}
/*
19
-100 11 13 17 19 101 71 73 74 -99 3 5 58 97 89 79 11 37 351
 */