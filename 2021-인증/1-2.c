#include <stdio.h>

int main(){
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    int cnt_1 = 0;
    if(a<0||a>100) cnt_1++;
    if(b<0||b>100) cnt_1++;
    if(c<0||c>100) cnt_1++;
    if(d<0||d>100) cnt_1++;
    if(e<0||e>100) cnt_1++;

    int cnt_2 = 0;  // 40점 미만인 과목의 수 count
    if(a<40) cnt_2++;
    if(b<40) cnt_2++;
    if(c<40) cnt_2++;
    if(d<40) cnt_2++;
    if(e<40) cnt_2++;

    int min = a;
    if(min > b) min = b;
    if(min > c) min = c;
    if(min > d) min = d;
    if(min > e) min = e;

    float avg = (a+b+c+d+e)/5.0;

    if (cnt_1 > 0) printf("Invalid\n");
    else {
        if(cnt_2 >=3) printf("F\n");
        else{
            if(avg >= 90) printf("A+\n");
            else if(avg >= 75)printf("A\n");
            else if(avg >= 65) printf("B+\n");
            else if(avg >= 50) printf("B\n");
            else printf("F\n");
        }

        printf("avg=%.2f min=%d\n", avg, min);
    }



    return 0;
}