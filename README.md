# 2.odevler
1.soru için açıklama
1.Soru: Eksik küme elemanı
Aşağıdaki kod, s dizisi içindeki sayılardan birinin tekrar edilmesiyle oluşan yeni diziyi oluşturur. Ardından eksik olan sayı ve tekrar eden sayıları bulur ve bunları bir dizi biçiminde döndürür.
Bu C programı, bir dizi içerisinde eksik ve tekrar eden sayıları bulmak için kullanılır. Algoritma, verilen dizideki elemanların mutlak değerlerini kullanarak işlem yapar.

Programın çalışma mantığı şu şekildedir:

İlk olarak, verilen dizinin elemanları yeni bir diziye kopyalanır. Bu yeni dizi üzerinde işlem yapılacaktır.
Daha sonra, yeni dizi üzerinde bir döngü oluşturulur ve her elemanın mutlak değeri -1 ile indeksi alınır. Bu işlem sonucunda elde edilen indeksteki elemanın değeri negatif yapılır. Eğer bu elemanın değeri zaten negatif ise, bu eleman tekrarlanan bir sayıdır ve kaydedilir.
Yeni dizi üzerinde bir döngü daha oluşturulur ve elemanların değerleri kontrol edilir. Eğer elemanın değeri pozitif ise, bu eleman eksik bir sayıdır ve kaydedilir Son olarak, bulunan eksik ve tekrarlanan sayılar bir dizi içerisinde saklanır ve bu dizi geri döndürülür.
Program, bellekte dinamik olarak alan ayırmak için malloc() fonksiyonunu kullanır. Sonucu tutmak için bir int pointerı kullanılır ve bu pointerın iki elemanı vardır: birincisi tekrarlanan sayı, ikincisi ise eksik sayıdır. Programın sonunda, kullanılan bellek alanını serbest bırakmak için free() fonksiyonu kullanılır.
2.soru için açıklama 
2.Soru: Ağaçtaki kök değeri alt düğümlerin toplamı mı?
yazılan kod, verilen ikili ağacın kökünün alt düğümlerinin toplamının kök değerine eşit olup olmadığını kontrol eder
Bu kod, bir ağacın kökünün sol ve sağ alt düğümlerinin toplamının kendisine eşit olup olmadığını kontrol eder. Algoritma, öncelikle yeni bir düğüm oluşturmak için "yeni_dugum" fonksiyonunu kullanır. Daha sonra, "toplam" fonksiyonu ile ağacın alt düğümlerinin toplamını hesaplar. Son olarak, "koke_esit_mi" fonksiyonu, ağacın kökünün sol ve sağ alt düğümlerinin toplamının kendisine eşit olup olmadığını kontrol eder.

Bu algoritma, ağaç veri yapısını kullanarak birçok farklı problemi çözmek için kullanılabilir. Örneğin, ağacın yüksekliğini, düğümlerinin sayısını veya belirli bir düğümün var olup olmadığını kontrol etmek için kullanılabilir.

Algoritmanın çalışma şekli, öncelikle "yeni_dugum" fonksiyonu ile ağacın düğümleri oluşturulur.Daha sonra "toplam" fonksiyonu ile ağacın alt düğümlerinin toplamı hesaplanır. Son olarak, "koke_esit_mi" fonksiyonu ile kökün sol ve sağ alt düğümlerinin toplamı, kök değeri ile karşılaştırılır ve sonuç döndürülür. Kod, main fonksiyonunda oluşturulan ağaç için "koke_esit_mi" fonksiyonunu çağırarak kökün alt düğümlerinin toplamının kendisine eşit olup olmadığını kontrol eder ve sonucu ekrana yazdırır. 

