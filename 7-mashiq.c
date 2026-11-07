#include <stdio.h>

int main() {
    int n;
    printf("Ikki xonali son kiriting: ");
    scanf("%d", &n);

    int birlar = n % 10;
    int onlar = n / 10;

    printf("Teskari: %d%d\n", birlar, onlar);
    return 0;
}