#include <stdio.h>

int main() {
    int parol;

    do {
        printf("Parolni kiriting: ");
        scanf("%d", &parol);

        if (parol != 12345) {
            printf("Noto'g'ri parol, qayta urinib ko'ring!\n");
        }
    } while (parol != 12345);

    printf("Parol to'g'ri! Xush kelibsiz.\n");
    return 0;
}