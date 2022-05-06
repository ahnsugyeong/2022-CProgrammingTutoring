#include <stdio.h>

int main(){
    int X[100];
    int M1, M2;
    scanf("%d %d", &M1, &M2);
    int cnt = 0;
    while(1){
        int N;
        scanf("%d", &N);
        if(N<=0) break;
        int Y[100] = {0};
        int tmp = N;
        int y_cnt = 0;
        while(tmp>0){
            Y[y_cnt] = tmp%10;
            tmp /=10;
            y_cnt++;
        }

        if(y_cnt-1>=M1) Y[M1] = -1;
        if(y_cnt-1>=M2) Y[M2] = -1;

        int deleted_N = 0;
        for(int i=0;i<y_cnt;i++){
            if(Y[i] == -1) continue;
            deleted_N = deleted_N*10 + Y[i];
        }
        tmp = deleted_N;
        int new = 0;
        while (tmp > 0) {
            new = new * 10 + tmp % 10;
            tmp /= 10;
        }

        if (deleted_N == new) {
            X[cnt] = N;
            cnt++;
        }
    }

    for(int i=0;i<cnt;i++){
        for(int j=0;j<cnt-1;j++){
            if(X[j] < X[j+1]){
                int tmp = X[j];
                X[j] = X[j+1];
                X[j+1] =tmp;
            }
        }
    }

    for(int i=0;i<cnt;i++){
        printf("%d ", X[i]);
    }
    return 0;
}
/*
1 3
12021 345433 12345 1022201 768833 2334 77907 12321 37773 -1
 */