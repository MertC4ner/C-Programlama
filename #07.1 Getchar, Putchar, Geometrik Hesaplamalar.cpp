#include <stdio.h>

int main()

{
	float boy, en, cevre, alan;
	
	/*
	 * Uzunluk  ve geni�lik de�erlerini kullan�c�dan al
	 */
	
	printf("Dikd�rtgenin uzunlu�unu giriniz: ");
	scanf("%f", &boy);
	printf("Dikd�rtgenin geni�li�ini giriniz: ");
	scanf("%f", &en);
	
	// Dikd�rtgenin �evresini hesapla
	cevre = 2 * (boy + en);
	
	// Dikd�rtgenin �evresini yazd�r
	printf("Dikd�rtgenin �evresi = %f birimdir\n", cevre);
	
	// Dikd�rtgenin alan�n� hesapla
	alan = boy * en;
	
	// Dikd�rtgenin alan�n� yazd�r
	printf("Dikd�rtgenin alan� = %f birim karedir", alan);
	
	return 0;
	
}
