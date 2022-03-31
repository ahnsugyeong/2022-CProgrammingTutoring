#include <stdio.h>

int main() {
    char a;
    int b;

    scanf("%c %d", &a, &b);
    char answer = a;
    if (a >= 'A' && a <= 'Z') {
        b = b % 26;
        int c = (int) a + b;
        if (c > 'Z') {
            c = c - 26;
            answer = c;
        }
        else answer = c;
    }
    else if (a >= 'a' && a <= 'z') {
        b = b % 26;
        int c = (int) a + b;
        if (c > 'z') {
            c = c - 26;
            answer = c;
        }
        else answer = c;
    }
    printf("%c", answer);
    return 0;
}