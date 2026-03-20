#include <stdio.h>

int main() {
    int notDegeri; // Değişkeni globalden alıp main içine taşıdık (Daha güvenli)

    printf("Lutfen 0-100 arasinda bir not giriniz: ");
    scanf("%d", &notDegeri);

    // Veri Doğrulama (Input Validation): Girilen notun 0-100 aralığında olup olmadığını kontrol ediyoruz
    if (notDegeri < 0 || notDegeri > 100) {
        printf("Hatali giris! Lutfen 0 ile 100 arasinda gecerli bir not giriniz.\n");
    } 
    else if (notDegeri >= 90) {
        printf("Girilen notunuz: AA\n");
    } 
    else if (notDegeri >= 75) {
        printf("Girilen notunuz: BB\n");
    } 
    else if (notDegeri >= 60) {
        printf("Girilen notunuz: CC\n");
    } 
    else if (notDegeri >= 45) {
        printf("Girilen notunuz: DD\n");
    } 
    else {
        printf("Girilen notunuz: FF\n");
    }

    return 0;
}
