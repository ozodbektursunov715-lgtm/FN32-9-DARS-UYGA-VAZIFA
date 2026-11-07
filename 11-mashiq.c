#include <stdio.h>

int main() {
    int tanlov;

    printf("Transport tanlang:\n");
    printf("1 - Avtomobil\n");
    printf("2 - Avtobus\n");
    printf("3 - Poyezd\n");
    printf("4 - Samolyot\n");
    printf("Raqamni kiriting: ");
    scanf("%d", &tanlov);

    switch (tanlov) {
        case 1:
            printf("Siz Avtomobilni tanladingiz.\n");
            break;
        case 2:
            printf("Siz Avtobusni tanladingiz.\n");
            break;
        case 3:
            printf("Siz Poyezdni tanladingiz.\n");
            break;
        case 4:
            printf("Siz Samolyotni tanladingiz.\n");
            break;
        default:
            printf("Noto'g'ri tanlov!\n");
    }
    return 0;
}