#include <stdio.h>
#include <stdbool.h>

int main(){
	
	bool ProgramcilikGuzelMi = true;
	bool TembellikIyiMi = false;
	
	printf("%d\n", ProgramcilikGuzelMi); // 1 (True) d�necek
	printf("%d\n", TembellikIyiMi); // 0 (False) d�necek
	printf("\n...\n");
	
	printf("%d\n", 10 > 9); // 1 (True) d�necek ��nk� 10, 9'dan b�y�kt�r
	
	int x = 10;
	int y = 9;
	printf("%d\n", x > y); // 1 (True) d�necek  ��nk� 10, 9'dan b�y�kt�r
	printf("\n...\n");
	
	printf("%d\n", 10 == 10); // 1 (True) d�nd�recek ��nk� 10, 10'a e�ittir
	printf("%d\n", 10 == 15); // 0 (False) d�nd�recek ��nk� 10, 15'e e�it de�ildir
	printf("%d\n", 5 != 55); // 1 (True) d�nd�recek ��nk� 5, 55'e e�it de�ildir

	return 0;
}	

