#include <stdio.h>

double add(double a,double b){
	return a+b;
}


int main(){
	char l[3][4] = {{10,12,14,16},{20,22}};
	for(int  i = 0; i < 3; i++){
		for(int j = 0; j < 4; j++){
			printf("%d ",l[i][j]);
		}
		printf("\n");
	}


	return 0;
}

//c programme to determine leap year?


