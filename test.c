#include<stdio.h>
int main() {
    char a=0,max=0,min=0;
    while (a != '0') {
        scanf("%c", &a);
        if (a >= 'A' && a <= 'Z') {
            max = a;
            if (a <= max) {
                max = a;
            }
        }
        else if (a >= 'a' && a <= 'z') {
            min = a;
            if (min <= a)
                min = a;
        }

    }
    printf("%c %c", max, min);
    return 0;

}
