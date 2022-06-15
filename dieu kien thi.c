#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int SBH, LT, TH, BTL;
	printf("Nhap so buoi hoc:\n");
	scanf("%d", &SBH);
	
	if(SBH>=10){
			printf("Nhap diem LT:\n");
	        scanf("%d", &LT);
	        printf("Nhap diem TH:\n");
	        scanf("%d", &TH);
	        printf("Nhap diem BTL:\n");
	        scanf("%d", &BTL);
		{
		if(LT>=8)
		printf("Qua LT\n");
		else
		printf("Thi lai LT\n");
	}
	{
	    if(TH>=6)
	     printf("Qua TH\n");
 	     else
	     printf("Thi lai TH\n");
	}
	{
		if(BTL>=4)
		printf("Qua BTL\n ");
		else
		printf("Thi lai BTL\n");
	}}
	else
	printf("Khong duoc thi");
	
	
	
		
	
	return 0;
}
