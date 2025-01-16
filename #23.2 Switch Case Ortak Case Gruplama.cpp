#include <stdio.h>

int main()
{
	int gun;
	
	// Kullanicidan haftanin kacinci gunu oldugunun bilgisini al
	printf("Gunun, haftanin kacinci gunu oldugunu giriniz (1-7): ");
	scanf("%d", &gun);
	
	switch(gun)
	{
		case (1 || 2 || 3 || 4 || 5): // hata verecek, boyle bir kullanim yok
			printf("Hafta Ici");
			break;
		case (6 || 7): // hata verecek, boyle bir kullanim yok
			printf("Hafta Sonu");
			break;
		default:
			printf("Gecersiz deger!... Lutfen 1 ile 7 arasinda bir sayi giriniz.");
	}
	
	return 0;
	
}
