#include <stdio.h>

// eksik_ve_tekrarlanan fonksiyonu s dizisindeki eksik ve tekrarlanan say�lar� bulur
int* eksik_ve_tekrarlanan(int s[], int n) {
    int i, eksik, tekrarlanan; // de�i�kenler tan�mlan�r
    int* sonuc = (int*)malloc(2 * sizeof(int)); // 2 elemanl� bir int pointer� i�in bellekte alan ay�r�l�r
    int* yeni_s = (int*)malloc(n * sizeof(int)); // n elemanl� bir int pointer� i�in bellekte alan ay�r�l�r
    for (i = 0; i < n; i++) {
        yeni_s[i] = s[i]; // yeni_s dizisine s dizisinin elemanlar� atan�r
    }
    for (i = 0; i < n; i++) {
        if (yeni_s[abs(yeni_s[i]) - 1] > 0) { // yeni_s dizisindeki eleman�n mutlak de�eri - 1. indisteki eleman�n de�eri 0'dan b�y�kse
            yeni_s[abs(yeni_s[i]) - 1] = -yeni_s[abs(yeni_s[i]) - 1]; // o eleman�n mutlak de�eri - 1. indisteki eleman�n de�eri negatife �evrilir
        }
        else { // de�ilse
            tekrarlanan = abs(yeni_s[i]); // tekrarlanan de�i�kenine o eleman�n mutlak de�eri atan�r
        }
    }
    for (i = 0; i < n; i++) {
        if (yeni_s[i] > 0) { // yeni_s dizisindeki eleman 0'dan b�y�kse
            eksik = i + 1; // eksik de�i�kenine i + 1 de�eri atan�r
        }
    }
    sonuc[0] = tekrarlanan; // sonuc pointer�n�n 0. indisi tekrarlanan de�i�kenine atan�r
    sonuc[1] = eksik; // sonuc pointer�n�n 1. indisi eksik de�i�kenine atan�r
    return sonuc; // sonuc pointer� fonksiyondan d�nd�r�l�r
}

int main() {
    int s[] = {1, 2, 3, 4, 5, 6, 7, 7, 8, 9}; // s dizisi tan�mlan�r ve elemanlar� atan�r
    int n = 10; // n de�i�keni 10'a e�itlenir
    int* sonuc = eksik_ve_tekrarlanan(s, n); // sonuc pointer� eksik_ve_tekrarlanan fonksiyonuna s dizisi ve n de�i�keni ile �a�r�l�r
    printf("Tekrarlanan sayi: %d\nEksik sayi: %d", sonuc[0], sonuc[1]); // tekrarlanan ve eksik de�i�kenleri ekrana yazd�r�l�r
    free(sonuc); // sonuc pointer�n�n bellekteki alan� serbest b�rak�l�r
    return 0; // program sonlan�r
}
