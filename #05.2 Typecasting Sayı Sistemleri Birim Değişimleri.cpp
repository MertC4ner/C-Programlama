#include <stdio.h>

int main()
{
	float cm, metre, km;
	
	/* Uzunlugu santimetre cinsinden al */
	
	printf("Uzunlugu santimetre cinsinden giriniz: ");
	scanf("%f", &cm);
	
	/* Cevrim islemlerini gerceklestir */
	
	metre = cm / 100.0;
	km = cm / 100000.0;
	
	printf("Metre cinsinden uzunluk = %.2f m \n", metre);
	printf("Kilometre cinsinden uzunluk = %.2f km", km);
	
	return 0;	
}
