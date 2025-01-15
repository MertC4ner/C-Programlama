#include <stdio.h>

int main()
{
	int sayi1, sayi2;
	
	// Kullanicidan iki sayi al
	printf("Lutfen iki sayi degeri giriniz: ");
	scanf("%d%d", &sayi1, &sayi2);
	
	// sayi1 daha büyükse
	if(sayi1 > sayi2)
	{
		printf("Birinci blok: %d daha buyuktur", sayi1);
	}
	
	// sayi2 daha büyükse
	if(sayi2 > sayi1)
	{
		printf("Ikinci blok: %d daha buyuktur", sayi2);
	}
	
	// Eþitlik durumunu kontrol et
	if(sayi1 == sayi2)
	{
		printf("Ucuncu blok: Ýki sayi esittir");
	}
	
	return 0;
}
