#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    for(int i=0;i<N;i++) {
        int num;
        scanf("%d", &num);

        int sum = 0;

        // 각 자릿수의 합
        int tmp = num;
        while (tmp) {
            sum += tmp % 10;
            tmp /= 10;
        }

        // 역순으로 뒤집기
        tmp = num;
        int reverse = 0;
        while (tmp) {
            reverse = reverse * 10 + tmp % 10;
            tmp /= 10;
        }

        printf("%d %d %d %d\n", num, sum, reverse, reverse%13);
    }


    return 0;
}