#include <stdio.h>

int main() {
	
	int eklenecek_sayi, eklenecek_indeks;
	int BenimDizim[] = {3,4,1,9,6,2,8};
	int boyut = sizeof (BenimDizim) / sizeof(BenimDizim[0]);
	
	for(int indeks = 0; indeks < boyut; indeks++)
	{
		printf("%d", BenimDizim[indeks]);
	}
	
	printf("\nDiziye eklenecek sayiyi giriniz: ");
	scanf("%d", &eklenecek_sayi);
	printf("Sayinin hangi indekse eklenecegini belirtiniz: ");
	scanf("%d", &eklenecek_indeks);
	
	for(int indeks = boyut - 1; indeks > eklenecek_indeks; indeks--)
	{
		BenimDizim[indeks] = BenimDizim[indeks-1];
	}
	BenimDizim[eklenecek_indeks] = eklenecek_sayi;
	
	for(int indeks = 0; indeks < boyut; indeks++)
	{
		printf("%d", BenimDizim[indeks]);
	}
	
	return 0;
	
	
}
