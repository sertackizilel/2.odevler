#include <stdio.h>
#include <stdlib.h>

// A�a� yap�s�n�n d���mleri i�in struct olu�turuldu
struct Node {
    int veri;
    struct Node* sol;
    struct Node* sag;
};

// Yeni d���m eklemek i�in fonksiyon olu�turuldu
struct Node* yeni_dugum(int veri) {
    struct Node* dugum = (struct Node*)malloc(sizeof(struct Node)); // bellekten yer ayr�ld�
    dugum->veri = veri; // d���m�n veri de�eri atan�yor
    dugum->sol = NULL; // sol ve sa� alt d���mleri ba�lang��ta NULL olarak atan�yor
    dugum->sag = NULL;
    return (dugum); // yeni olu�turulan d���m�n adresi geri d�nd�r�l�yor
}

// A�ac�n alt d���mlerinin toplam�n� hesaplamak i�in fonksiyon olu�turuldu
int toplam(struct Node* dugum) {
    if (dugum == NULL) { // E�er d���m NULL ise 0 d�nd�r�l�yor
        return 0;
    }
    // Sol ve sa� alt d���mlerin toplamlar� hesaplan�yor ve k�k de�eri ile toplan�yor
    return dugum->veri + toplam(dugum->sol) + toplam(dugum->sag);
}

// K�k�n alt d���mlerinin toplam�n�n kendisine e�it olup olmad���n� kontrol etmek i�in fonksiyon olu�turuldu
int koke_esit_mi(struct Node* kok) {
    if (kok == NULL) { // E�er k�k NULL ise 1 d�nd�r�l�yor
        return 1;
    }
    int sol_toplam = toplam(kok->sol); // sol alt d���m�n toplam� hesaplan�yor
    int sag_toplam = toplam(kok->sag); // sa� alt d���m�n toplam� hesaplan�yor
    if (kok->veri == sol_toplam + sag_toplam) { // K�k de�eri, sol ve sa� alt d���mlerin toplam�na e�itse 1 d�nd�r�l�yor
        return 1;
    }
    return 0; // E�it de�ilse 0 d�nd�r�l�yor
}
