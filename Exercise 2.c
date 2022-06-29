#include <stdio.h>
#include <stdlib.h>
void daonguoc(int number[10]){
	int i;
	for (i=0;i<5;i++){
       int result=number[i];
       number[i]=number[9-i];
       number[9-i]=result;
  	}
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int number[10]={9,6,1,1,1,1,1,1,1,20};
	int i;
	int result; 
	for(i=0;i<10;i++){
		printf("\n Number %d : %d", i+1,number[i]);
	} 
	printf("\nResult:\n");
	daonguoc(number[10]);
	
	

	
	
	return 0;
}
