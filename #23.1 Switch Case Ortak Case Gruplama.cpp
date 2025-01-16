#include <stdio.h>

int main()
{
	int gun;
	
	// Kullanicidan haftanin kacinci gunu oldugunun bilgisini al
	printf("Gunun, haftanin kacinci gunu oldugunu giriniz (1-7): ");
	scanf("%d", &gun);
	
	switch(gun)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("Hafta Ici");
			break;
		case 6:
		case 7:
			printf("Hafta Sonu");
			break;
		default:
			printf("Gecersiz deger!... Lutfen 1 ile 7 arasinda bir sayi giriniz.");
	}
	
	return 0;
	
}
