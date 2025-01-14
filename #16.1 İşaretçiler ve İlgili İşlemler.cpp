#include <stdio.h>

int main()
{
	
	int sayi1, sayi2, toplam;
	int *isaretci1, *isaretci2;
	
	isaretci1 = &sayi1; // isaretci1, sayi1'in adresini tutmakta
	isaretci2 = &sayi2; // isaretci2, sayi2'nin adresini tutmakta
	
	printf("Ýki sayi giriniz: ");
	scanf("%d%d", isaretci1, isaretci2); // buraya dikkat; scanf kullanýmýnda!...
	
	toplam = *isaretci1 + *isaretci2;
	
	printf("Toplam = %d", toplam);
	
	return 0;
}
