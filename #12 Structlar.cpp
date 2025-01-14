#include <stdio.h>
#include <string.h>

// PersonelBilgisi isimli bir struct oluþtur
struct PersonelBilgisi {
	
	int Yas;
	float Maas;
	char Isim[30];
	char Cinsiyet[8];
};

int main(){
	
	// PersonelBilgisi yapýsýnda, Personel1 isimli bir deðiþken tanýmla
	struct PersonelBilgisi Personel1;
	
	// Personel1'in alanlarýna deðer ata
	// Personel1.Isim = "Ahmet Ahmetoðlu"; böyle yazarsak hata alýrýz
	strcpy(Personel1.Isim, "Ahmet Ahmetoðlu");
	// Personel1.Cinsiyet = "Erkek"; böyle yazarsak hata alýrýz
	strcpy(Personel1.Cinsiyet, "Erkek");
	Personel1.Yas = 34;
	Personel1.Maas = 8500;
	
	// Personel1 struct'ýnýn deðerlerini yazdýr
	printf("Personel Adý: %s\n", Personel1.Isim);
	printf("Personelin Cinsiyeti: %s\n", Personel1.Cinsiyet);
	printf("Personelin Yaþý: %d\n", Personel1.Yas);
	printf("Personelin Maaþý: %lf\n", Personel1.Maas);
	
	printf("\n....................................\n");
	
	// Yeni bir personel tanýmla (alternatif bir tanýmlama yöntemi)
	struct PersonelBilgisi Personel2 = {33, 8800, "Ayþe Ayþeoðlu", "Kadýn" };

	// Personel2 strcut'ýnýn deðerlerini yazdýr
	printf("Personelin Adý: %s\n", Personel2.Isim);
	printf("Personelin Cinsiyeti: %s\n", Personel2.Cinsiyet);
	printf("Personelin Yaþý: %d\n", Personel2.Yas);
	printf("Personelin Maaþý: %lf\n", Personel2.Maas);
	
	printf("\n.........................\n");
	
	struct PersonelBilgisi Personel2Kopyasi;
	// Personel2'nin bilgilerini yeni bir yapýya kopyala
	Personel2Kopyasi = Personel2;
	// Personel2Koppyasi struct'ýnýn deðerlerini yazýdýr
	
	printf("Personelin Adý: %s\n", Personel2Kopyasi.Isim);
	printf("Personelin Cinsiyeti: %s\n", Personel2Kopyasi.Cinsiyet);
	printf("Personelin Yaþý: %d\n", Personel2Kopyasi.Yas);
	printf("Personelin Maaþý: %lf", Personel2Kopyasi.Maas);
	
	return 0;

}
