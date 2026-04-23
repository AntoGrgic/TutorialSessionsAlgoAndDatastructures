#include <stdio.h>

int T(int n, int c1) {
    if (n <= 1) {
        return 1;
    }
    int t = 2 * T(n - 1, c1) + c1;
    printf("%d\n", t);
    return t;
}

int main() {
    int n = 10;
    int c1 = 0;

    int result = T(n, c1);
    printf("Final result: %d\n", result);

    return 0;
}