#include <stdio.h>

int SayininKubunuHesapla(int sayi);

int main()
{
	int sayi, c;
	
	// Kubu hesaplanacak sayiyi kullanicidan al
	
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d", &sayi);
	
	c = SayininKubunuHesapla(sayi);
	
	printf("%d sayisinin kubu = %d", sayi, c);
	
	return 0;
}

// Verilen  bir sayinin kubunu hesaplayan fonksiyon

int SayininKubunuHesapla(int sayi)
{
	return ( sayi * sayi * sayi);
}
