#include <stdio.h>

int main() {
   int n;
    scanf("%d", &n);

    int m = 0, c = 0;

    while (n > 0) {
        if (n % 2 == 1) {
            c++;
            if (c > m) {
                m = c;
            }
        } else {
            c = 0;
        }
        n /= 2;
    }

    printf("%d\n", m);

    return 0;
}