#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int y = 0;
    while (1) {
        int b = 0;
        int m = n;
        while (m > 0) {
            int i = m % 10;
            b += i * i;
            m /= 10;
        }
        n = b;
        y++;

        if (n == 1) {
            printf("Mutlu Sayi\n");
            break;
        } else if (y > 1022) {
            printf("Mutsuz Sayi\n");
            break;
        }
    }
    return 0;
}