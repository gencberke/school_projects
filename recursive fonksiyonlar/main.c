#include <stdio.h>

// Recursive fonksiyon tanımı
//int faktoriyel(int n) {
    // Temel durum (base case): 0! ve 1! her zaman 1'dir
    //if (n == 0 || n == 1) {
       // return 1
       // } else {
        // Recursive çağrı: n! = n * (n-1)!
       // return n * faktoriyel(n - 1);
    //}
//}

//int main() {
//    int sayi;

 //printf("Faktöriyeli hesaplanacak sayıyı girin: ");
   // scanf("%d", &sayi);

    // Negatif sayıların faktöriyeli tanımlı değildir
    //if (sayi < 0) {
     //   printf("Negatif sayıların faktöriyeli tanımlı değildir.\n");
   // } else {
        // Fonksiyonu çağır ve sonucu ekrana yazdır
     //   printf("%d! = %d\n", sayi, faktoriyel(sayi));
    //}

    //return 0;
//}

int usalma(int taban, int us);

int main(){
    int taban,us;

    printf("taban değerini giriniz: ");
    scanf("%d",&taban);

    printf("us değerini giriniz: ");
    scanf("%d",&us);

    printf("sonuç: %d", usalma(taban,us));

    return 0;
}

int usalma(int taban, int us){
    if(taban<0 && us%2==0){
        taban=-taban;
    }
    if(us==0) {
        return 1;
    }
    int sonuc = 1;
    for (int i = 0; i < us; ++i) {
        sonuc = sonuc*taban;
    }

    return sonuc;
}




