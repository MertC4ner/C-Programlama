#include <stdio.h>
#include <string.h>

int main(){
	
	char metin1[20] = "Merhaba ";
	char metin2[] = "Dunya!";
	char metin3[20];
	
	// metin2'yi metin1'in ucuna ekle (sonu� metin1'de depolanyr
	strcat(metin1, metin2);
	
	// metin1'i yazdyr
	printf("%s", metin1);
	printf("\n...\n");
	
	// metin1 i�eri?ini metin3'e kopyala
	strcpy(metin3,metin1);
	
	// metin3'� yazdyr
	printf("%s", metin3);
	printf("\n...\n");
	
	// Compare metin1 ve metin3'� kar?yla?tyr ve sonucu yazdyr
	/* Mevcut durumda:
	 * metin1 = "Merhaba Dunya!"
	 * metin2 = "Dunya!"
	 * metin3 = "Merhaba Dunya!"
	 */
	 
	 
	printf("%d\n", strcmp(metin1, metin3)); // 0 d�nd�recek (e?it olduklary i�in)
	printf("\n...\n");
	printf("%d\n", strcmp(metin1, metin2)); // 9 d�nd�recek (e?it olmadyklary i�in)
	printf("\n...\n");
	printf("%d", strcmp(metin2, metin1)); // -9 d�nd�recek (e?it olmadyklary i�in)
	printf("\n...\n");
	
	printf("%s", metin1);
	printf("\n...\n");
	printf("%s", metin2);
	printf("\n...\n");
	printf("%s", metin3);
	
	return 0;
}
