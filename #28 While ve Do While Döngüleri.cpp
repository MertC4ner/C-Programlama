#include <stdio.h>

int main()
{
	int i, n;
	//
	printf("Ust sinir degerini giriniz: ");
	scanf("%d", &n);
	
	printf("1'den %d'ye kadar tum sayma sayilari : \n", n);
	
	/*
	 * Dongu sayacini 1'den baslat
	 * n degerine kadar git (i<=n)
	 * her seferinde dongu sayacini 1 arttir (i++)
	 * her seferinde i degerini yazdir ve alt satira gec
	 */
	 
	 for(i=1; i<=n; i++)
	 {
	 	printf("%d\n", i);
	 }
	 
	 printf("...\n");
	 
	 i=1;
	 while(i<=n)
	 {
	 	printf("%d\n", i);
	 	i++;
	 }
	 
	 printf("...\n");
}
