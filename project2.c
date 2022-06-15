#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int a,b,c,d,i,e,f,g;

printf("Nhap vao so a:");
scanf("%d", &a);
printf("Nhap vao so b:");
scanf("%d", &b);
printf("Nhap vao so c:");
scanf("%d", &c);
printf("Nhap vao so d:");
scanf("%d", &d);
printf("Nhap vao so i:");
scanf("%d",&i);
e = ++i%7;
printf("%d\n",e);
f = 5*(c-3+d);
printf("%d\n",f);
g = a*(b+c/d)-22;
prntf("%d\n",g);

	return 0;
}
