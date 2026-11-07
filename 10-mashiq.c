#include <stdio.h>

int main() {
    int n;
    int musbat = 0, manfiy = 0;

    printf("Sonlarni kiriting (0 - to'xtatish):\n");

    while (1) {
        scanf("%d", &n);

        if (n == 0) {
            break;
        }

        if (n > 0) {
            musbat++;
        } else {
            manfiy++;
        }
    }

    printf("Musbat sonlar soni: %d\n", musbat);
    printf("Manfiy sonlar soni: %d\n", manfiy);
    return 0;
}