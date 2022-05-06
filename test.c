#include <stdio.h>

#define SIZE 100

int main() {
    int arr[20], N = 20, M, i, temp, cnt = 1;
    for (int i = 0; i < 20; i++) {
        arr[i] = cnt;
        cnt++;
    }
    scanf("%d", &M);
    temp = arr[19];


    for (i = N - 2; i >= (N - M); i--) arr[i + 1] = arr[i];
    arr[N - M] = temp;
    for(int i=0;i<20;i++)
        printf("%d ", arr[i]);

    return 0;
}