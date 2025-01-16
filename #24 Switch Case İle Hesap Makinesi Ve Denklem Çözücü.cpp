#include <stdio.h>

int main()
{
	char islem;
	float sayi1, sayi2, sonuc=0.0f;
	
	// Karsilama mesaji yazdir

	printf("BASIT HESAP MAKINESI UYGULAMASI");
	printf("-------------------------------");
	printf("Lutfen [sayi 1] [+ , - , * , /] [sayi 2] giriniz\n");
	
	// Iki sayiyi ve islem isaretini kullanicidan al
	
	scanf("%f %c %f", &sayi1, &islem, &sayi2);
	
	// Islem isaretine gore faaliyet gerceklestir
	
	switch(islem)
	{
		case '+':
			sonuc = sayi1 + sayi2;
			break;
			
		case '-':
			sonuc = sayi1 - sayi2;
			break;
			
		case '*':
			sonuc = sayi1 * sayi2;
			break;
			
		case '/':
			sonuc = sayi1 / sayi2;
			break;
			
		default:
			printf("Gecersiz Islem!...");	
	}
	
	// Sonuclari YAzdir
	printf("%.2f %c %.2f = %.2f", sayi1, islem, sayi2, sonuc);
	
	return 0;
}
