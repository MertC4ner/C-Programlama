#include <stdio.h>

int main()
{
	int i, sayi;
	
	// Carpanlari hesaplanacak sayiyi kullanicidan al
	
	printf("Lutfen carpanlari hesaplanacak sayiyi giriniz: ");
	scanf("%d", &sayi);
	
	printf("%d sayisinin tum carpanlari: \n", sayi);
	
	// 1'den sayiya kadar tum sayilarda gez
	
	for(i=1; i<=sayi; i++)
	{
		//sayi, i'ye tam bolunebiliyorsa
		if(sayi % i == 0)
		{
			printf("%d, ", i);
		}
	}
	
	return 0;
}
