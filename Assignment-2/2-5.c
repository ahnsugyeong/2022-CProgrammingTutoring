#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if (num % 100 != 0 || num / 10000 != 1) printf("none");   // 잘못된 입력
    else {
        int a = num / 100 % 10;
        if (a == 0 || a == 1 || a == 2) printf("Seoul");
        else if (a == 3 || a == 4) printf("Busan");
        else if (a == 5) printf("Gwangju");
        else printf("none");
    }
    return 0;
}