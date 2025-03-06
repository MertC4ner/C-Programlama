#include <stdio.h>
#include <math.h>

// Fonksiyon beyanllari

float CemberCapiHesapla(float yaricap);
float CemberCevresiHesapla(float yaricap);
float DaireAlaniHesapla(float yaricap);

int main()
{
	float yaricap, cap, cevre, alan;
	
	// Kullanicidan yaricap bilgisini al
	
	printf("Cembrein/Dairenin yaricapini giriniz: ");
	scanf("%f", &yaricap);
	
	// Cap, cevre ve alan degerlerini hesapla
	
	cap = CemberCapiHesapla(yaricap);
	cevre = CemberCevresiHesapla(yaricap);
	alan = DaireAlaniHesapla(yaricap);
	
	// Sonuclari Yazdir
	
	printf("Cap: %.2f\n", cap);
	printf("Cevre: %.2f\n", cevre);
	printf("Alan: %.2f\n", alan);
	
	return 0;
}

// Yaricapi verilen bir cemberin capini hesaplayan fonksiyon

float CemberCapiHesapla(float yaricap)
{
	return (2 * yaricap);
}

// Yaricapi veirlen bir cemberin cevresini hesapla

float CemberCevresiHesapla(float yaricap)
{
	return (2 * M_PI * yaricap); // M_PI = PI = 3.14...
}

// Yaricapi verilen bir dairenin alanini hesaplayan fonksiyon

float DaireAlaniHesapla(float yaricap)
{
	return (M_PI * yaricap * yaricap); //M_PI = PI = 3.14...
}
