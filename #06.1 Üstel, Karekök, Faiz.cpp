#include <stdio.h>
#include <math.h> // sqrt() fonksiyonunu kullanabilmek i�in

int main()
{
	
	double sayi, karekok;
	
	/* Kullan�c�dan say� degeri al */
	
	printf("Karekoku hesaplanacak say�y� giriniz : ");
	scanf("%lf", &sayi);
	
	/* Say�n�n karekokunu hesapla */
	karekok = sqrt(sayi);
	
	/* Sonucu yazd�r */
	printf("%.2lf say�n�n karek�k� = %.2lf", sayi, karekok);
	
	return 0;
		
	
}
