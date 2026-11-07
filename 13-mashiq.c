#include <stdio.h>

int main() {
    int taom;

    printf("=== MENYU ===\n");
    printf("1 - Osh\n");
    printf("2 - Lag'mon\n");
    printf("3 - Manti\n");
    printf("4 - Sho'rva\n");
    printf("5 - Somsa\n");
    printf("Taom raqamini kiriting: ");
    scanf("%d", &taom);

    switch (taom) {
        case 1:
            printf("Osh\n");
            break;
        case 2:
            printf("Lag'mon\n");
            break;
        case 3:
            printf("Manti\n");
            break;
        case 4:
            printf("Sho'rva\n");
            break;
        case 5:
            printf("Somsa\n");
            break;
        default:
            printf("Bunday taom menyuda yo'q!\n");
    }
    return 0;
}