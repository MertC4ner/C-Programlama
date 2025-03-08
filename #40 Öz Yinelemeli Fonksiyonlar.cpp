#include <stdio.h>
int FaktoriyelHesapla(int n);

int main()
{
	int deger;
	printf("Lutfen bir deger giriniz: ");
	scanf("%d", &deger);
	
	printf("%d! = %d \n",deger, FaktoriyelHesapla(deger));
	
	return 0;
}

int FaktoriyelHesapla(int n)
{
	int f;
	if(n<=1)
		return 1;
	return n * FaktoriyelHesapla(n-1);
		
}


