#include <stdio.h>

int main(){
	
	int sayi = 10;
	int * isaretci;
	
	/* sayi degiskeninin adresi, isaretci (pointer) tipi degisken tarafından tutulacak*/
	
	isaretci = &sayi;
	
	printf("sayi degiskeninin adresi = %d\n", &sayi);
	printf("sayi degiskeninin icerigi = %d\n", sayi);
	
	printf("isaretci degiskeninin adresi = %d\n", &isaretci);
	printf("isaretci degiskeninin icerigi = %d\n", isaretci);
	printf("isaretci degiskenininn isaret ettigi deger = %d\n", *isaretci);
	
	return 0;	
}
