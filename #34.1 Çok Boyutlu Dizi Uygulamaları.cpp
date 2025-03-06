#include <stdio.h>

int main(){
	
	int BenimMatrisim[2][3][4] = {{{1,5,5,4},{6,7,0,8},{7,7,9,4}},
									{{6,1,5,6},{3,6,7,1},{6,2,8,9}}};
								
	int i,j,k;
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
			for(k = 0; k < 4; k++){
				printf("%d", BenimMatrisim[i][j][k]);
			}
			printf("\n");
		}
		printf("----------\n");
	}
	
	return 0;
}
