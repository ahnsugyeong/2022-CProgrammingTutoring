#include <stdio.h>

int main() {
    char X[101];
    int cnt_x = 0;
    while (1) {
        char tmp;
        scanf("%c", &tmp);
        if (tmp == '!') break;
        X[cnt_x] = tmp;
        cnt_x++;
    }
    X[cnt_x] = '\0';


    char Y[101];
    int cnt_y = 0;
    int a[26] = {0};
    for (int i = 0; i < cnt_x; i++) {
        a[X[i] - 'a']++;

        int flag = 0;
        for (int j = 0; j < i; j++) {
            if (X[i] == X[j]) flag = 1;
        }
        if (flag == 0) {
            Y[cnt_y] = X[i];
            cnt_y++;
        }
    }
    Y[cnt_y] = '\0';

    for (int i = cnt_y - 1; i >= 0; i--) {
        printf("%c %d\n", Y[i], a[Y[i] - 'a']);
    }


    return 0;
}