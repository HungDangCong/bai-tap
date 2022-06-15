#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int integer1; /* first number to be input by user */
	int integer2; /* second number to be input by usser */
	int sum; /* variable in which sum will be store */
	
	printf( "Enter first integer\n"); /*prompt*/
	scanf("%d", &integer1); /* read an integer */
	
		printf( "Enter first integer\n"); /*prompt*/
	scanf("%d", &integer2); /* read an integer */
	
	sum = integer1 + integer2; /* assign total to sum */
	
	printf("sum is %d\n",sum); /* prinft sum */
	
	return 0;
}
