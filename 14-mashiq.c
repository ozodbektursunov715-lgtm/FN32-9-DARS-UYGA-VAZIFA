#include <stdio.h>

int main() {
    int tanlov;
    double som, natija;

    // Kurslar (1 birlik valyuta = necha so'm)
    double usd = 12700.0;
    double eur = 13800.0;
    double rub = 160.0;

    printf("Valyutani tanlang:\n");
    printf("1 - Dollar (USD)\n");
    printf("2 - Yevro (EUR)\n");
    printf("3 - Rubl (RUB)\n");
    printf("Tanlov: ");
    scanf("%d", &tanlov);

    printf("So'm miqdorini kiriting: ");
    scanf("%lf", &som);

    switch (tanlov) {
        case 1:
            natija = som / usd;
            printf("%.2f so'm = %.2f USD\n", som, natija);
            break;
        case 2:
            natija = som / eur;
            printf("%.2f so'm = %.2f EUR\n", som, natija);
            break;
        case 3:
            natija = som / rub;
            printf("%.2f so'm = %.2f RUB\n", som, natija);
            break;
        default:
            printf("Noto'g'ri tanlov!\n");
    }
    return 0;
}