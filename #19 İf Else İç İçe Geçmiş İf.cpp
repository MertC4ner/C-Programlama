#include <stdio.h>

int main()
{
	int sayi;
	
	// Kullanicidan sayi degerlerini al
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d", &sayi);
	
	if(sayi > 0)
	{
		printf("Girmis oldugunuz sayi pozitiftir");
	}
	
	else if(sayi < 0)
	{
		printf("Girmis oldugunuz sayi negatiftir");
	}
	
	else
	{
		printf("Girmis oldugunuz sayi sifirdir");
	}
	
	return 0;
}
