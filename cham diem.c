#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int mark1;
	int mark2;
	float avgGPA;
	
	printf("Nhap vao gia tri mark1:");
	scanf("%d", &mark1);
	printf("Nhap vao gia tri mark2:");
	scanf("%d", &mark2);
	avgGPA = ((float)mark1+(float)mark2)/2;
	/* (float)mark ep kieu du lieu */
	printf("avgGPA=%f", avgGPA);
	return 0;
}
