#include <stdio.h>

int main() {
    while (1) {
        int N;
        scanf("%d", &N);
        if (N == -1)break;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N - i - 1; j++) printf(" ");

            if (i == 0) {
                printf("X\n");
            }
            else if (i == N - 1) {
                for (int j = 0; j < 2 * i + 1; j++) printf("X");
                printf("\n");
            }
            else {
                printf("X");
                for (int j = 0; j < 2 * i - 1; j++) printf("O");
                printf("X\n");
            }

        }


    }


    return 0;
}