#include <stdio.h>

// eksik_ve_tekrarlanan fonksiyonu s dizisindeki eksik ve tekrarlanan sayýlarý bulur
int* eksik_ve_tekrarlanan(int s[], int n) {
    int i, eksik, tekrarlanan; // deðiþkenler tanýmlanýr
    int* sonuc = (int*)malloc(2 * sizeof(int)); // 2 elemanlý bir int pointerý için bellekte alan ayýrýlýr
    int* yeni_s = (int*)malloc(n * sizeof(int)); // n elemanlý bir int pointerý için bellekte alan ayýrýlýr
    for (i = 0; i < n; i++) {
        yeni_s[i] = s[i]; // yeni_s dizisine s dizisinin elemanlarý atanýr
    }
    for (i = 0; i < n; i++) {
        if (yeni_s[abs(yeni_s[i]) - 1] > 0) { // yeni_s dizisindeki elemanýn mutlak deðeri - 1. indisteki elemanýn deðeri 0'dan büyükse
            yeni_s[abs(yeni_s[i]) - 1] = -yeni_s[abs(yeni_s[i]) - 1]; // o elemanýn mutlak deðeri - 1. indisteki elemanýn deðeri negatife çevrilir
        }
        else { // deðilse
            tekrarlanan = abs(yeni_s[i]); // tekrarlanan deðiþkenine o elemanýn mutlak deðeri atanýr
        }
    }
    for (i = 0; i < n; i++) {
        if (yeni_s[i] > 0) { // yeni_s dizisindeki eleman 0'dan büyükse
            eksik = i + 1; // eksik deðiþkenine i + 1 deðeri atanýr
        }
    }
    sonuc[0] = tekrarlanan; // sonuc pointerýnýn 0. indisi tekrarlanan deðiþkenine atanýr
    sonuc[1] = eksik; // sonuc pointerýnýn 1. indisi eksik deðiþkenine atanýr
    return sonuc; // sonuc pointerý fonksiyondan döndürülür
}

int main() {
    int s[] = {1, 2, 3, 4, 5, 6, 7, 7, 8, 9}; // s dizisi tanýmlanýr ve elemanlarý atanýr
    int n = 10; // n deðiþkeni 10'a eþitlenir
    int* sonuc = eksik_ve_tekrarlanan(s, n); // sonuc pointerý eksik_ve_tekrarlanan fonksiyonuna s dizisi ve n deðiþkeni ile çaðrýlýr
    printf("Tekrarlanan sayi: %d\nEksik sayi: %d", sonuc[0], sonuc[1]); // tekrarlanan ve eksik deðiþkenleri ekrana yazdýrýlýr
    free(sonuc); // sonuc pointerýnýn bellekteki alaný serbest býrakýlýr
    return 0; // program sonlanýr
}
