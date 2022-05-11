#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int first[20], second[20], rank[20];
    float avg[20];
    for(int i=0;i<N;i++){
        scanf("%d", &first[i]);
    }
    for(int i=0;i<N;i++){
        scanf("%d", &second[i]);
    }
    for(int i=0;i<N;i++){
        avg[i] = (float)(first[i]*0.4+second[i]*0.6);
    }
    for(int i=0;i<N;i++){
        int tmp = 1;
        for(int j=0;j<N;j++){
            if(i == j) continue;
            if(avg[i] < avg[j]) tmp++;
        }
        rank[i] = tmp;
    }

    for(int i=0;i<N;i++){
        printf("%d %d %d %.1f %d\n", i+1, first[i], second[i], avg[i], rank[i]);
    }


    return 0;
}