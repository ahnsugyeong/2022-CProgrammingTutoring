#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);
    !(year % 4) && (year % 100) || !(year % 400) ? printf("L") : printf("C");
    return 0;
}