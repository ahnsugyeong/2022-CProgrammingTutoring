#include <stdio.h>

void reverse_num(int N);

int main(){
    int N;
    scanf("%d", &N);
    reverse_num(N);
    return 0;
}

void reverse_num(int N){
    int new = 0;
    while(N>0){
        new = new*10 + N%10;
        N/=10;
    }
    printf("%d\n",new);
}