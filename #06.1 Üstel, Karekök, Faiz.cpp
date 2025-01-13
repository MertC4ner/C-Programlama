#include <stdio.h>
#include <math.h> // sqrt() fonksiyonunu kullanabilmek için

int main()
{
	
	double sayi, karekok;
	
	/* Kullanýcýdan sayý degeri al */
	
	printf("Karekoku hesaplanacak sayýyý giriniz : ");
	scanf("%lf", &sayi);
	
	/* Sayýnýn karekokunu hesapla */
	karekok = sqrt(sayi);
	
	/* Sonucu yazdýr */
	printf("%.2lf sayýnýn karekökü = %.2lf", sayi, karekok);
	
	return 0;
		
	
}
