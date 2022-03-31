#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int sum = 0;
    if (a == 1) sum += 5000;
    if (a == 2) sum += 2500;
    if (a == 3) sum += 2000;
    if (a == 4) sum += 1500;
    if (a == 5) sum += 1000;

    if (b == 1) sum += 5000;
    if (b == 2) sum += 2500;
    if (b == 3) sum += 2000;
    if (b == 4) sum += 1500;
    if (b == 5) sum += 1000;

    if (c == 1) sum += 5000;
    if (c == 2) sum += 2500;
    if (c == 3) sum += 2000;
    if (c == 4) sum += 1500;
    if (c == 5) sum += 1000;

    printf("Total:%d\n", sum);
    if (sum > 10000) printf("Insufficient Money\n");
    else printf("Change:%d\n", 10000 - sum);

    return 0;
}