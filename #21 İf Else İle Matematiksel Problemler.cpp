#include <stdio.h>

int main()
{
	int kar_zarar, maliyet, satis_bedeli;
	
	printf("Lutfen urunlerin maliyetini giriniz: ");
	scanf("%d", &maliyet);
	
	printf("Lutfen urunlerin satis bedelini giriniz: ");
	scanf("%d", &satis_bedeli);
	
	if(satis_bedeli > maliyet)
	{
		kar_zarar = satis_bedeli - maliyet;
		printf("KAR = %d", kar_zarar);
	}
	
	else if(satis_bedeli < maliyet)
	{
		kar_zarar = maliyet - satis_bedeli;
		printf("ZARAR = %d", kar_zarar);
	}
	
	else
	{
		printf("KAR veya ZARAR edilmemis");
	}
	
	return 0;
}
