#include <stdio.h>
#include <math.h> // pow() fonksiyonunu kullanabilmek i�in

int main()
{
	
	double taban, kuvvet, sonuc;
	
	/* kullan�c�dan iki say� al */
	
	printf("Taban degerini giriniz: ");
	scanf("%lf", &taban);
	printf("Kuvvet degerini giriniz: ");
	scanf("%lf", &kuvvet);
	
	/* taban^kuvvet degerini hesapla */
	
	sonuc = pow(taban, kuvvet);
	
	printf("%.2lf ^ %.2lf = %.2lf", taban, kuvvet, sonuc);
	
	return 0;
}
