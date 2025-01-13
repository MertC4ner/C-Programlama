#include <stdio.h>

int main()
{
	int sayi1, sayi2;
	int toplam, fark, carpim, mod;
	float bolum;
	
	/*
	 * Kullanicidan iki sayi al
	 */
	printf("Lutfen iki sayi giriniz: ");
	scanf("%d%d", &sayi1, &sayi2);
	
	/*
	 * Tum aritmetik idlemleri gerceklestir
	 */
	toplam = sayi1 + sayi2;
	fark = sayi1 - sayi2;
	carpim = sayi1 * sayi2;
	bolum = (float)sayi1 / sayi2;
	mod = sayi1 % sayi2;

	/*
	 * Sonuçlari yazdir
	 */
	printf("Toplam = %d\n", toplam);
	printf("Fark = %d\n", fark);
	printf("Carpim = %d\n", carpim);
	printf("Bolum = %f\n", bolum);
	printf("Kalan veya Modulo = %d", mod);
	
	return 0;
	
}
