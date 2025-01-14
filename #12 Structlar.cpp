#include <stdio.h>
#include <string.h>

// PersonelBilgisi isimli bir struct olu�tur
struct PersonelBilgisi {
	
	int Yas;
	float Maas;
	char Isim[30];
	char Cinsiyet[8];
};

int main(){
	
	// PersonelBilgisi yap�s�nda, Personel1 isimli bir de�i�ken tan�mla
	struct PersonelBilgisi Personel1;
	
	// Personel1'in alanlar�na de�er ata
	// Personel1.Isim = "Ahmet Ahmeto�lu"; b�yle yazarsak hata al�r�z
	strcpy(Personel1.Isim, "Ahmet Ahmeto�lu");
	// Personel1.Cinsiyet = "Erkek"; b�yle yazarsak hata al�r�z
	strcpy(Personel1.Cinsiyet, "Erkek");
	Personel1.Yas = 34;
	Personel1.Maas = 8500;
	
	// Personel1 struct'�n�n de�erlerini yazd�r
	printf("Personel Ad�: %s\n", Personel1.Isim);
	printf("Personelin Cinsiyeti: %s\n", Personel1.Cinsiyet);
	printf("Personelin Ya��: %d\n", Personel1.Yas);
	printf("Personelin Maa��: %lf\n", Personel1.Maas);
	
	printf("\n....................................\n");
	
	// Yeni bir personel tan�mla (alternatif bir tan�mlama y�ntemi)
	struct PersonelBilgisi Personel2 = {33, 8800, "Ay�e Ay�eo�lu", "Kad�n" };

	// Personel2 strcut'�n�n de�erlerini yazd�r
	printf("Personelin Ad�: %s\n", Personel2.Isim);
	printf("Personelin Cinsiyeti: %s\n", Personel2.Cinsiyet);
	printf("Personelin Ya��: %d\n", Personel2.Yas);
	printf("Personelin Maa��: %lf\n", Personel2.Maas);
	
	printf("\n.........................\n");
	
	struct PersonelBilgisi Personel2Kopyasi;
	// Personel2'nin bilgilerini yeni bir yap�ya kopyala
	Personel2Kopyasi = Personel2;
	// Personel2Koppyasi struct'�n�n de�erlerini yaz�d�r
	
	printf("Personelin Ad�: %s\n", Personel2Kopyasi.Isim);
	printf("Personelin Cinsiyeti: %s\n", Personel2Kopyasi.Cinsiyet);
	printf("Personelin Ya��: %d\n", Personel2Kopyasi.Yas);
	printf("Personelin Maa��: %lf", Personel2Kopyasi.Maas);
	
	return 0;

}
