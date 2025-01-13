#include <stdio.h>
#include <math.h>
int main()
{
	
	float ana_para, zaman, faiz_orani, basit_faiz_miktari, bilesik_faiz_miktari;
	
	/* Girdileri al */
	printf("Ana para miktar�n� giriniz: ");
	scanf("%f", &ana_para);
	
	printf("Zaman� giriniz: ");
	scanf("%f", &zaman);
	
	printf("Faiz oran�n� giriniz: ");
	scanf("%f", &faiz_orani);
	
	/* Basit faiz hesab� ile faiz miktar�n� hesapla */
	basit_faiz_miktari = (ana_para * zaman * faiz_orani) / 100;
	
	/* Basit faiz hesab�n�n sonucunu yazd�r */
	printf("Basit faiz hesab� ile hesaplanan faiz miktar� = %f\n" , basit_faiz_miktari);
	
	/* Bile�ik faiz hesab� ile faiz miktar�n� hesapla */
	bilesik_faiz_miktari = ana_para * (pow((1 + faiz_orani / 100), zaman));
	
	/* Bile�ik faiz hesab�n�n sonucunu yazd�r */
	printf("Bile�ik faiz hesab� ile hesaplanan faiz miktar� = %f", bilesik_faiz_miktari);
	
	return 0;
	
}
