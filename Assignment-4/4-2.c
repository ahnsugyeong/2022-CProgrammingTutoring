#include <stdio.h>

int main() {
    int arr[20];
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = N - 1; i >= 0; i--) {
        printf(" %d", arr[i]);
    }
    printf("\n");
    int max_arr[7], min_arr[7];
    int index = 0;
    int max, min;
    for (int i = 0; i < N; i++) {
        //3개씩 묶을 수 있을 때 (첫번째 인덱스가 N-3이하일 때)
        if (i < N - 2) {
            max = arr[i];
            min = arr[i];
            for (int j = i + 1; j <= i + 2; j++) {
                if (max < arr[j]) max = arr[j];
                if (min > arr[j]) min = arr[j];
            }
            i += 2;
        }
        else {
            max = arr[i];
            min = arr[i];
            for (int j = i + 1; j < N; j++) {
                if (max < arr[j]) max = arr[j];
                if (min > arr[j]) min = arr[j];
            }
            i = N - 1;
        }

        max_arr[index] = max;
        min_arr[index] = min;
        index++;
    }

    for (int i = 0; i < index; i++) {
        printf(" %d", max_arr[i]);
    }
    printf("\n");
    for (int i = 0; i < index; i++) {
        printf(" %d", min_arr[i]);
    }
    printf("\n");


    return 0;
}