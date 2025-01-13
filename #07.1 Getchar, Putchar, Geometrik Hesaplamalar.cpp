#include <stdio.h>

int main()

{
	float boy, en, cevre, alan;
	
	/*
	 * Uzunluk  ve geniþlik deðerlerini kullanýcýdan al
	 */
	
	printf("Dikdörtgenin uzunluðunu giriniz: ");
	scanf("%f", &boy);
	printf("Dikdörtgenin geniþliðini giriniz: ");
	scanf("%f", &en);
	
	// Dikdörtgenin çevresini hesapla
	cevre = 2 * (boy + en);
	
	// Dikdörtgenin çevresini yazdýr
	printf("Dikdörtgenin çevresi = %f birimdir\n", cevre);
	
	// Dikdörtgenin alanýný hesapla
	alan = boy * en;
	
	// Dikdörtgenin alanýný yazdýr
	printf("Dikdörtgenin alaný = %f birim karedir", alan);
	
	return 0;
	
}
