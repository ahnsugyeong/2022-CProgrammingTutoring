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


    int M;
    scanf("%d", &M);
    getchar();
    char Z[101];
    for (int i = 0; i < M; i++) {
        scanf("%c", &Z[i]);
    }

    int len = 0;
    int index = -1;
    for (int i = 0; i < cnt_y; i++) {
        if (index != -1) break;
        for (int j = 0; j < M; j++) {
            if (Y[i + j] == Z[j]) len++;
            else len = 0;
        }
        if (len == M) {
            index = i;
        }
    }


    if (index == -1) printf("none\n");
    else {
        for (int i = 0; i < cnt_y; i++) {
            printf("%c", Y[i]);
        }
        printf("\n%d", index);
    }


    return 0;
}