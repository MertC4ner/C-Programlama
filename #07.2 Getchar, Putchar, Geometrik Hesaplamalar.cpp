#include <stdio.h>
#include <math.h> // M_PI say�s�n� kullanmak amac�yla

int main()
{
	float yaricap, cap, cevre, alan;
	
	// Kullan�c�dan yar��ap bilgisini al
	
	printf("�emberin/Dairenin yar�ap�n� giriniz: ");
	scanf("%f", &yaricap);
	
	// �ap, �evre ve alan de�erlerini hesapla
	
	cap = 2 * yaricap;
	cevre = 2 * M_PI * yaricap;
	alan = M_PI * (yaricap * yaricap);
	
	// T�m sonu�lar� yazd�r
	
	printf("�emberin �ap� = %.2f birimdir \n", cap);
	printf("Cemberin cevresi = %.2f birimdir \n", cevre);
	printf("Dairenin alan� = %.2f birim karedir ", alan);
	
	return 0;
	
}

