#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num % 100 != 0 || num / 1000 != 10) printf("none");   // 잘못된 입력
    else {
        switch (num / 100 % 10) {
            case 0: {
                printf("Seoul");
                break;
            }
            case 1: {
                printf("Seoul");
                break;
            }
            case 2: {
                printf("Seoul");
                break;
            }
            case 3: {
                printf("Busan");
                break;
            }
            case 4: {
                printf("Busan");
                break;
            }
            case 5: {
                printf("Gwangju");
                break;
            }
            default: {
                printf("none");
                break;
            }
        }
    }
    return 0;
}