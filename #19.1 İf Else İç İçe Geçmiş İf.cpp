#include <stdio.h>

int main()
{
	int sayi1, sayi2, sayi3, maksimum;
	
	// Kullanicidan 3 sayi degeri al
	printf("Lutfen 3 adet sayi giriniz");
	scanf("%d%d%d", &sayi1, &sayi2, &sayi3);
	
	if(sayi1 >sayi2)
	{
		if(sayi1 > sayi3)
		{
			// sayi1 > sayi2 ve sayi1 > sayi3 ise
			maksimum = sayi1;
		}
		else
		{
			// sayi1 > sayi2 ancak sayi1 > sayi3 degilse
			maksimum = sayi3;
		}
	}
	else
	{
		if(sayi2 > sayi3)
		{
			// sayi1 > sayi2 degilse ve sayi2 > sayi3 ise
			maksimum = sayi2;
		}
		else
		{
			// sayi1 > sayi2 degilse ve sayi2 > sayi3 degilse
			maksimum = sayi3;
		}
	}
	
	// Maksimum degeri yazdýr
	printf("3 sayi icerisinde en buyuk deger = %d", maksimum);
	
	return 0;

}
