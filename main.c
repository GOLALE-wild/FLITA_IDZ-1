#include <stdio.h>

void perevod(int a) {
    int dvoich[20], k = 0;
    while (a > 0) {
        dvoich[k] = (a % 2);
        k++;
        a = a / 2;
    }
    for (k; k > 0; k--) {
        printf("%d", dvoich[k - 1]);
    }
}
int main(void) {
    int mas[99], n, i = 0;
    while ((scanf("%d", &n)) && (n != EOF)) {
        mas[i] = n;
        i++;
    }
    for (int m = 0; m < i; m++) {
        printf("%d ", mas[m]);
    }
    printf("\n");
    for (int m = 0; m < i; m++) {
        perevod(mas[m]);
        printf(" ");
    }
    return 0;
}
