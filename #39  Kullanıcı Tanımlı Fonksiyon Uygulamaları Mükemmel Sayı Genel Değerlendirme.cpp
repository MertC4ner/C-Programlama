#include <stdio.h>
#include <math.h>

int SayiMukemmelMi(int sayi);

int main()
{
	int sayi;
	
	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);
	
	// SayiMukemmelMi() fonksiyonunu cagir ve sonucu yazdir
	
	if(SayiMukemmelMi(sayi))
	{
		printf("%d bir mukemmel sayidir", sayi);
	}
	else
	{
		printf("%d bir mukemmel sayi degildir", sayi);
	}
	
	return 0;
}

int SayiMukemmelMi(int sayi)
{
	/* Kendisi haric, pozitif tam bolenlerinin toplami
		kendisine esit olan bir sayi, mukemmel sayidir.
		
		ornek: 6 sayisinin kendisi haric bolenleri: 1,2,3
		1 + 2 + 3 = 6 oldugundan, 6 mukemmel sayidir
	*/
	
	int i, toplam, n;
	toplam = 0;
	n = sayi;
	
	for(i = 1; i < n; i++)
	{
		// sayi, i degerine bolunuyorsa
		if(n % i == 0)
		{
			toplam += i;
		}
	}
	
	return(sayi == toplam);
}
