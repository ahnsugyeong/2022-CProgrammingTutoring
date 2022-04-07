#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int even = 0, odd = 0;
    while (N > 0) {
        if ((N % 10) % 2 == 0) even = even * 10 + N % 10;
        else odd = odd * 10 + N % 10;
        N /= 10;
    }
    printf("%d %d\n", even, odd);
    return 0;
}