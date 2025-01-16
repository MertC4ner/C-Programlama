#include <stdio.h>

int main()
{
	int i = 0;
	
	while(i < 10)
	{
		if(i == 4)
		{
			continue; // Continue komutu yuzunden i++ atlanýyor ve sonsuz donguye giriyor.
		}			  // While da iken continue ya dikkat etmek gerekir	
		printf("%d\n", i);
		i++;
	}
	
	return 0;
}
