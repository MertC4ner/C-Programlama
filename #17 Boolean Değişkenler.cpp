#include <stdio.h>
#include <stdbool.h>

int main(){
	
	bool ProgramcilikGuzelMi = true;
	bool TembellikIyiMi = false;
	
	printf("%d\n", ProgramcilikGuzelMi); // 1 (True) dönecek
	printf("%d\n", TembellikIyiMi); // 0 (False) dönecek
	printf("\n...\n");
	
	printf("%d\n", 10 > 9); // 1 (True) dönecek çünkü 10, 9'dan büyüktür
	
	int x = 10;
	int y = 9;
	printf("%d\n", x > y); // 1 (True) dönecek  çünkü 10, 9'dan büyüktür
	printf("\n...\n");
	
	printf("%d\n", 10 == 10); // 1 (True) döndürecek çünkü 10, 10'a eþittir
	printf("%d\n", 10 == 15); // 0 (False) döndürecek çünkü 10, 15'e eþit deðildir
	printf("%d\n", 5 != 55); // 1 (True) döndürecek çünkü 5, 55'e eþit deðildir

	return 0;
}	

