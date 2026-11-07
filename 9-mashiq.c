#include <stdio.h>

int main() {
    int jami = 0;
    int pul;

    while (jami < 100000) {
        printf("Jamg'argan pulingizni kiriting: ");
        scanf("%d", &pul);
        jami += pul;
    }

    printf("Jami yig'ilgan pul: %d so'm\n", jami);
    return 0;
}