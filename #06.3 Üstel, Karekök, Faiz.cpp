#include <stdio.h>
#include <math.h>
int main()
{
	
	float ana_para, zaman, faiz_orani, basit_faiz_miktari, bilesik_faiz_miktari;
	
	/* Girdileri al */
	printf("Ana para miktarýný giriniz: ");
	scanf("%f", &ana_para);
	
	printf("Zamaný giriniz: ");
	scanf("%f", &zaman);
	
	printf("Faiz oranýný giriniz: ");
	scanf("%f", &faiz_orani);
	
	/* Basit faiz hesabý ile faiz miktarýný hesapla */
	basit_faiz_miktari = (ana_para * zaman * faiz_orani) / 100;
	
	/* Basit faiz hesabýnýn sonucunu yazdýr */
	printf("Basit faiz hesabý ile hesaplanan faiz miktarý = %f\n" , basit_faiz_miktari);
	
	/* Bileþik faiz hesabý ile faiz miktarýný hesapla */
	bilesik_faiz_miktari = ana_para * (pow((1 + faiz_orani / 100), zaman));
	
	/* Bileþik faiz hesabýnýn sonucunu yazdýr */
	printf("Bileþik faiz hesabý ile hesaplanan faiz miktarý = %f", bilesik_faiz_miktari);
	
	return 0;
	
}
