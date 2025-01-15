#include <stdio.h>

int main()
{
	int sayi1, sayi2, sayi3, maksimum;
	
	// Kullanicidan 3 sayi degeri al
	printf("Lutfen 3 tane sayi degeri giriniz: ");
	scanf("%d%d%d", &sayi1, &sayi2, &sayi3);
	
	if((sayi1 > sayi2 ) && (sayi1 > sayi3))
	{
		// sayi1 diger ikisinden de buyuk
		maksimum = sayi1;
	}
	else if ((sayi2 > sayi1) && (sayi2 > sayi3))
	{
		// sayi2 diger ikisinden de buyuk
		maksimum = sayi2;
	}
	else if((sayi3 > sayi1) && (sayi3 > sayi2))
	{
		// sayi3 diger ikisinden de buyuk
		maksimum = sayi3;
	}
	
	// Maksimum degeri yazdir
	printf("3 sayi icerisinde en buyuk deger = %d", maksimum);
	
	return 0;
}
