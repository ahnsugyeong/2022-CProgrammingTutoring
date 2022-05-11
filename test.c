#include <stdio.h>

int main() {
    int x[50], i, j, flag = 0, cnt;

    int N;
    scanf("%d", &N);
    for (i = 0; i < N; i++) {

        scanf("%d", &x[i]);

    }

    for (i = 0; i < N; i++) {

        cnt = 0;

        flag = 0;

        for (j = 0; j < i; j++) {

            if (x[i] == x[j])

                flag = 1;

        }

        for (j = 0; j < N; j++) {

            if (x[i] == x[j])

                cnt++;

        }

        if (flag == 0)

            printf("%d %d\n", x[i], cnt);

    }

    return 0;

}