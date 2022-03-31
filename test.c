#include <stdio.h>

int main() {
    char st;
    int mon, man;
    int b;

    scanf("%c %d", &st, &b);
    // z 100
    if (b>=26) b = b % 26;

    mon = st + b;
    man = st + b;


    if (mon > 90)
        mon -= 26;
    if (man > 122)
        man -= 26;

    if (st >= 'A' && st <= 'Z')
        printf("%c", mon);
    else if (st >= 'a' && st <= 'z')
        printf("%c", man);
    else
        printf("%c", st);
}