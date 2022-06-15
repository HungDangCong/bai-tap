#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,max;
	printf("Nhap vao gia tri max \n");
	printf("In ra bang gia tri:");
	scanf("%d", &max);
	for(i=0, j=max; i<=max; i++, j--){
		printf("%d + %d=%d\n",i,j,i+j);
	}
	return 0;
}
