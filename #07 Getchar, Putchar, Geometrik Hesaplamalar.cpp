#include <stdio.h>

int main()
{
	
	char ogrenci_notu;
	printf("��renci notunu giriniz: ");
	
	// getchar() komutu ile notu al ve ogrenci_notu de�i�keninde sakla
	ogrenci_notu = getchar();
	
	// putchar() komutu ile notu ��kt� olarak ver
	putchar(ogrenci_notu);
	
	return 0;

}
