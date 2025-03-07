#include <stdio.h>

int SayiCiftMi(int sayi)
{
	if((sayi % 2) == 0)
		return 1;
	else
		return 0;
}

int main()
{
	int sayi;
	
	// Kullanicidan sayi al
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d", &sayi);
	
	// SayiCiftMi() fonksiyonunun sonuclarýný gor
	
	if(SayiCiftMi(sayi))
	{
		printf("Bu bir cift sayidir.");
	}
	else
	{
		printf("Bu bir tek sayidir.");
	}
	
	return 0;
}
