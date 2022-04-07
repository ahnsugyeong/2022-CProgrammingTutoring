#include<stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int i = 1;
    int M=0;

    while (i <= N) {
        scanf("%d", &M);
        int cnt = 0;
        i++;

        for (int j = 1; j <= M; j++) {
            if (M % j == 0) {
                printf("%d ", j);
                cnt++;
            }

        }
        printf("%d", cnt);

    }

    return 0;

}