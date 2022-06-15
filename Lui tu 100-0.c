#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	printf("\t This is a \n");
	for(a = 100; a >= 0 ; a-=5){
		printf("\n\t\t nice");
		printf("%d", a);
	}
	printf("\n\t\t world. \n");
	return 0;
}
