#include <stdio.h>4
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ch='a';
	int i;
	float f;
	double d;
	float result; 
	

printf("a=%d\n", ch);
	printf("Nhap gia tri i:");
	scanf("%d", &i);
	printf("Nhap gia tri f:");
	scanf("%f", &f);
	printf("Nhap vao gia tri d:");
	scanf("%lf", &d);
	
	
	result = (ch/i)+(f*d)-(f+i);
	printf("%f", result);
	
	 
	return 0;
}
