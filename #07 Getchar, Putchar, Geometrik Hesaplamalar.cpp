#include <stdio.h>

int main()
{
	
	char ogrenci_notu;
	printf("Öðrenci notunu giriniz: ");
	
	// getchar() komutu ile notu al ve ogrenci_notu deðiþkeninde sakla
	ogrenci_notu = getchar();
	
	// putchar() komutu ile notu çýktý olarak ver
	putchar(ogrenci_notu);
	
	return 0;

}
