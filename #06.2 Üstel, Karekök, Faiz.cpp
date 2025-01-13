#include <stdio.h>

int main()
{
	
	float ana_para, zaman, faiz_orani, faiz_miktari;
	
	/* Girdileri al */
	printf("Ana para miktarýný giriniz: ");
	scanf("%f", &ana_para);
	
	printf("Zamaný giriniz: ");
	scanf("%f", &zaman);
	
	printf("Faiz oranýný giriniz: ");
	scanf("%f", &faiz_orani);
	
	/* Basit faiz hesabý ile faiz miktarýný hesapla */
	faiz_miktari = (ana_para * zaman * faiz_orani) / 100;
	
	/* Sonucu yazdýr */
	
	printf("Basit faiz hesabý ile hesaplanan faiz miktarý = %f", faiz_miktari);
	
	return 0;
	
}
