#include <stdio.h>
#include <stdlib.h>

// Aðaç yapýsýnýn düðümleri için struct oluþturuldu
struct Node {
    int veri;
    struct Node* sol;
    struct Node* sag;
};

// Yeni düðüm eklemek için fonksiyon oluþturuldu
struct Node* yeni_dugum(int veri) {
    struct Node* dugum = (struct Node*)malloc(sizeof(struct Node)); // bellekten yer ayrýldý
    dugum->veri = veri; // düðümün veri deðeri atanýyor
    dugum->sol = NULL; // sol ve sað alt düðümleri baþlangýçta NULL olarak atanýyor
    dugum->sag = NULL;
    return (dugum); // yeni oluþturulan düðümün adresi geri döndürülüyor
}

// Aðacýn alt düðümlerinin toplamýný hesaplamak için fonksiyon oluþturuldu
int toplam(struct Node* dugum) {
    if (dugum == NULL) { // Eðer düðüm NULL ise 0 döndürülüyor
        return 0;
    }
    // Sol ve sað alt düðümlerin toplamlarý hesaplanýyor ve kök deðeri ile toplanýyor
    return dugum->veri + toplam(dugum->sol) + toplam(dugum->sag);
}

// Kökün alt düðümlerinin toplamýnýn kendisine eþit olup olmadýðýný kontrol etmek için fonksiyon oluþturuldu
int koke_esit_mi(struct Node* kok) {
    if (kok == NULL) { // Eðer kök NULL ise 1 döndürülüyor
        return 1;
    }
    int sol_toplam = toplam(kok->sol); // sol alt düðümün toplamý hesaplanýyor
    int sag_toplam = toplam(kok->sag); // sað alt düðümün toplamý hesaplanýyor
    if (kok->veri == sol_toplam + sag_toplam) { // Kök deðeri, sol ve sað alt düðümlerin toplamýna eþitse 1 döndürülüyor
        return 1;
    }
    return 0; // Eþit deðilse 0 döndürülüyor
}
