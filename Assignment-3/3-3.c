#include <stdio.h>

int main() {
    int n, r;
    scanf("%d %d", &n, &r);
    if(!(0<r && r<=n)) printf("inputs n and r must satisfy \'0 < r <= n\'.\n");
    else {
        //순열
        long long result_1 = 1;
        for (int i = n; i >= n - r + 1; i--) {
            result_1 *= i;
        }

        //중복순열
        long long result_2 = 1;
        for (int i = r; i > 0; i--) result_2 *= n;

        //조합
        long long result_3 = result_1;
        for (int i = r; i > 0; i--) {
            result_3 /= i;
        }

        //중복조합
        long long result_4 = 1;
        for (int i = n + r - 1; i >= n; i--) {
            result_4 *= i;
        }
        for (int i = r; i > 0; i--) {
            result_4 /= i;
        }

        printf("%dP%d=%lld\n", n, r, result_1);
        printf("%dPI%d=%lld\n", n, r, result_2);
        printf("%dC%d=%lld\n", n, r, result_3);
        printf("%dH%d=%lld\n", n, r, result_4);

    }
    return 0;
}
/*
 * cnt = 0
 * N = 3
 * M = 6
 * 1, 2, 3, 6
 * cnt = 4
 *
 * cnt = 0
 *
 * M = 2
 * 1, 2
 * cnt = 6
 *
 *
 * M = 6
 * 1 2 3 4 5 6
 *
 */