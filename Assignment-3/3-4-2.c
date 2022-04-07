#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    int same = 0;
    int smaller = 0;
    int greater = 0;
    while (1) {
        int num;
        scanf("%d", &num);
        if (num == 0) break;

        while (num > 0) {
            if (num % 10 > T) greater++;
            else if (num % 10 < T) smaller++;
            else same++;
            num /= 10;
        }

    }
    printf("%d %d %d", same, smaller, greater);
    return 0;
}