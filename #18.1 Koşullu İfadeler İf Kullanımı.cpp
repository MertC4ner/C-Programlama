#include <stdio.h>

int main()
{
	int sayi;
	
	// Kullanicidan sayi degerini al
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d", &sayi);
	
	if(sayi > 0)
	{
		printf("Birinci Blok: Girmis oldugunuz sayi pozitiftir");
	}
	
	if(sayi < 0)
	{
		printf("Ikinci Blok: Girmis oldugunuz sayi negatiftir");
	}
	
	if(sayi == 0)
	{
		printf("Ucuncu Blok: Girmis oldugunuz sayi 0 a esittir");
	}
	
	return 0;
}
