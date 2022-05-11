#include <stdio.h>

int main() {
    char x[101];
    int x_cnt = 0;
    while (1) {
        int tmp;
        scanf("%c", &tmp);
        if (tmp == '*') break;
        x[x_cnt++] = tmp;
    }

    char y[101];
    int y_cnt = 0;
    while (1) {
        int tmp;
        scanf("%c", &tmp);
        if (tmp == '*') break;
        y[y_cnt++] = tmp;
    }

    int min = x_cnt;
    if (x_cnt > y_cnt) min = y_cnt;

    //사전순으로 x가 더 빠르면 0, y가 더 빠르면 1
    int flag = -1;
    for (int i = 0; i < min; i++) {
        if (x[i] < y[i]) {
            flag = 0;
            break;
        } else if (x[i] > y[i]) {
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        for (int i = 0; i < x_cnt; i++) printf("%c", x[i]);
    } else {
        for (int i = 0; i < y_cnt; i++) printf("%c", y[i]);
    }


    return 0;
}