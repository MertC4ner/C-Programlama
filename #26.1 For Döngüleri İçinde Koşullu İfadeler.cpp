#include <stdio.h>

int main()
{
	int a, i, n, toplam=0;
	
	
	// Kullanicidan alt sinir degerlerini al
	printf("Lutfen alt sinir belirleyin: ");
	scanf("%d", &i);
	
	// Kullanicidan ust sinir degerlerini al
	printf("Lutfen ust sinir belirleyin: ");
	scanf("%d", &n);
	
	// Ttum sayilarin toplamini hesapla
	for(a=i; a<=n; a++)
	{
		toplam+= a;
	}
	
	printf("%d alt siniri ile %d ust siniri arasindaki sayilarin toplami: %d", i, n, toplam);
	
	return 0;
}
