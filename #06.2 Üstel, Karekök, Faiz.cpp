#include <stdio.h>

int main()
{
	
	float ana_para, zaman, faiz_orani, faiz_miktari;
	
	/* Girdileri al */
	printf("Ana para miktar�n� giriniz: ");
	scanf("%f", &ana_para);
	
	printf("Zaman� giriniz: ");
	scanf("%f", &zaman);
	
	printf("Faiz oran�n� giriniz: ");
	scanf("%f", &faiz_orani);
	
	/* Basit faiz hesab� ile faiz miktar�n� hesapla */
	faiz_miktari = (ana_para * zaman * faiz_orani) / 100;
	
	/* Sonucu yazd�r */
	
	printf("Basit faiz hesab� ile hesaplanan faiz miktar� = %f", faiz_miktari);
	
	return 0;
	
}
