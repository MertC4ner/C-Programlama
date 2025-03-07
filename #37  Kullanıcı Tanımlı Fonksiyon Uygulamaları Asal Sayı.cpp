#include <stdio.h>
#include <math.h>

// Fonksiyon Beyanlarý (declaration)

int SayiAsalMi(int sayi);

int main()
{
	int sayi;
	
	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);
	
	// SayiAsalMi( fonksiyonunu cag,r ve sonucu yazdir
	
	if(SayiAsalMi(sayi))
	{
		printf("%d bir asal sayidir. \n", sayi);
	}
	else
	{
		printf("%d bir asal sayi degildir. \n", sayi);
	}
	return 0;
}

// Bir sayinin asal olup olmadýgýný kontrol eden fonksiyon
// sayi asalsa 1, degilse 0 sonucunu dondurur

int SayiAsalMi(int sayi)
{
	int i;
	
	for(i = 2; i <= sayi/2 ; i++)
	{
		// Sayi, baska bir sayiya bolunuyorsa asal degildir
		
		if(sayi % i == 0)
		{
			return 0;
		}
	}
	
	return 1;
}
