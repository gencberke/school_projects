#include <stdio.h>

int main() {

        int sayi1;
        int sayi2;
        printf("ilk sayıyı giriniz ");
        scanf("%d", &sayi1);
        if (sayi1 == 0) {
            printf("sonuc 0");
            return 0;
        }
        printf("ikinci sayıyı giriniz ");
        scanf("%d", &sayi2);

        if (sayi1 * sayi2 < 0) {
            printf("çarpma sonuc negatif %d", sayi1 * sayi2);
        } else if (sayi1 * sayi2 > 0) {
            printf("çarpma sonuc pozitif %d", sayi1 * sayi2);
        }

        return 0;

}
