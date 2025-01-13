#include <stdio.h>
#include <math.h> // M_PI sayýsýný kullanmak amacýyla

int main()
{
	float yaricap, cap, cevre, alan;
	
	// Kullanýcýdan yarýçap bilgisini al
	
	printf("Çemberin/Dairenin yarçapýný giriniz: ");
	scanf("%f", &yaricap);
	
	// Çap, çevre ve alan deðerlerini hesapla
	
	cap = 2 * yaricap;
	cevre = 2 * M_PI * yaricap;
	alan = M_PI * (yaricap * yaricap);
	
	// Tüm sonuçlarý yazdýr
	
	printf("Çemberin çapý = %.2f birimdir \n", cap);
	printf("Cemberin cevresi = %.2f birimdir \n", cevre);
	printf("Dairenin alaný = %.2f birim karedir ", alan);
	
	return 0;
	
}

