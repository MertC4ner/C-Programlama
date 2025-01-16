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
			printf("Hafta Ici");
			break;
		case 2:
			printf("Haftta Ici");
			break;
		case 3:
			printf("Hafta Ici");
			break;
		case 4:
			printf("Hafta Ici");
			break;
		case 5:
			printf("Haftta Ici");
			break;
		case 6:
			printf("Hafta Sonu");
			break;
		case 7:
			printf("Hafta Sonu");
			break;
		default:
			printf("Gecersiz deger!... Lutfen 1 ile 7 arasinda bir sayi giriniz.");
			
	}
	
	return 0;
}
