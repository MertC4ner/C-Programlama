#include <stdio.h>

int main()
{
	int gun;
	
	// Kullanicidan, haftanin kacinci gunu oldugunun bilgisini al
	printf("Gunun, haftanin kacinci gunu oldugunu giriniz (1-7): ");
	scanf("%d", &gun);
	
	switch(gun)
	{
		case 1:
			printf("Pazartesi");
			break;
		case 2:
			printf("Sali");
			break;
		case 3:
			printf("Carsamba");
			break;
		case 4:
			printf("Persembe");
			break;
		case 5:
			printf("Cuma");
			break;
		case 6:
			printf("Cumartesi");
			break;
		case 7:
			printf("Pazar");
			break;
		default:
			printf("Gecersiz deger!... Lutfen 1 ile 7 arasinda bir sayi giriniz. ");
	}
	
	return 0;
}
