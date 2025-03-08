#include <stdio.h>
#include <math.h>

int SayiArmstrongMu(int sayi);

int main()
{
	int sayi;
	
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d", &sayi);
	
	// SayiArmstrongMu() fonskiyonunu cagir ve sonucu yazdir
	
	if(SayiArmstrongMu(sayi))
	{
		printf("%d bir Armstrong sayisidir.\n", sayi);
	}
	else
	{
		printf("%d bir Armstrong sayisi degildir.\n", sayi);
	}
	
	return 0;
}

int SayiArmstrongMu(int sayi)
{
	/* n basamakli bir sayi icin
		abc...klm = (a^n) + (b^n) + (c+n) + ... + (k^n) + (l^n) + (m^n)
		
		Ornek: 153 = (1^3) + (5^3) + (3^3) = 1 + 125 + 27 = 153
		-> 153 bir armstrong sayisidir
		
	*/
	
	int son_basamak, toplam, orjinal_sayi, basamak_sayisi;
	toplam = 0;
	
	orjinal_sayi = sayi;
	
	// Sayinin kac basamakli oldugunu hesapla
	basamak_sayisi = (int) log10(sayi) + 1;
	
	// Her bir basamagin üstellerinin toplamini hesapla
	
	while(sayi > 0)
	{
		// Son basamagi al
		son_basamak = sayi % 10;
		
		// Son basamagin ustelini hesapla ve toplam degiskenine ekle
		toplam = toplam + round(pow(son_basamak, basamak_sayisi));
		
		// Son basamagi yok et
		sayi = sayi / 10;
	}
	
	return (orjinal_sayi == toplam);
}
