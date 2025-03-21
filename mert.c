#include <stdio.h>

int main() {
    int grade;

    while (1) {  // Sonsuz döngü, çıkış için break kullanılacak.
        printf("Notu girin (Çıkmak için negatif girin): ");
        try{
            
        }
        scanf("%d", &grade);

        if (grade < 0) {
            printf("Programdan çıkılıyor...\n");
            break;  // Negatif girildiğinde döngüden çık.
        }

        if (grade <= 100 && grade >= 0) {
            if (grade >= 80) {
                printf("Harf notu: A\n");
            } else if (grade >= 60) {
                printf("Harf notu: B\n");
            } else {
                printf("Harf notu: C\n");
            }
        } else {
            printf("Geçersiz not! 0 ile 100 arasında bir değer girin.\n");
        }
    }

    return 0;  // Program başarıyla bitti.
}
