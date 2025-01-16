#include <stdio.h>
int main()
{
	int i, n;
	
	// Kullanicidan ust sinir degerini al
	printf("Ust sinir degerini giriniz: ");
	scanf("%d", &n);
	
	printf("1'den %d'ye kadar olan tum sayma sayilari : \n", n );
	
	/*
	 * Dongu sayacini 1'den baslat
	 * n degerine kadar git (i<n)
	 * her seferinde dongu sayacini 1 arttýr (i++)
	 * her seferinde i degerini yazdir ve alt satira gec
	 */
	 
	 for(i=1; i<n; i++)
	 {
	 	printf("%d\n", i);
	 }
	 
	 return 0;
}
