#include <stdio.h>
#include <ctype.h>

int main() {
    int anahtar = 3;
    char karakter;

    FILE *belgeOkuma, *belgeYazma;
    belgeOkuma = fopen("C:\\Users\\alifu\\OneDrive\\Masaüstü\\output1.txt", "r");

    if (belgeOkuma == NULL) {
        printf("Dosya acma hatasi!");
        return 1;
    }

    belgeYazma = fopen("C:\\Users\\alifu\\OneDrive\\Masaüstü\\decoded_output.txt", "w");

    if (belgeYazma == NULL) {
        printf("Dosya olusturma hatasi!");
        return 1;
    }

    while ((karakter = getc(belgeOkuma)) != EOF) {
        if (isalpha(karakter)) {
            karakter = tolower(karakter);
            karakter -= 'a';
            karakter -= anahtar;
            if (karakter < 0) {
                karakter += 26;
            }
            karakter %= 26;
            karakter += 'a';
        }
        fprintf(belgeYazma, "%c", karakter);
    }

    fclose(belgeOkuma);
    fclose(belgeYazma);

    printf("Sifre cozme tamamlandi. Cozulmus metin 'decoded_output.txt' dosyasina yazildi.\n");

    return 0;
}
