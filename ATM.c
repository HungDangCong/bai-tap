#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int cardid,pin;
	int luachon;
	char i;
	printf("Login\n");
	printf("Nhap vao cardid:\n");
	scanf("%d", &cardid);
	printf("Nhap vao ma pin: \n");
	scanf("%d", &pin);
	if(cardid==123 && pin==456)
	{
	do{
		printf("1.Rut tien\n");
		printf("2.Chuyen khoan\n");
		printf("3.Xem so du\n");
		printf("4.Ket thuc\n");
		printf("Nhap vao lua chon:\n");
		scanf("%d", &luachon);
		switch(luachon)
		{
			case 1:
				printf("Nhap so tien:\n");
				break;
			case 2:
				printf("Nhap so tk nhan:\n");
				break;
			case 3:
				printf("Hien thi so du:\n");
				break;
			case 4:
				printf("Ket thuc\n");
				break;
		}
			printf("Ban co muon tiep tuc Y/N: ");
			fflush(stdin);
			scanf("%c", &i);
		}
		while(i!='N');
		printf("Ket thuc chuong trinh");
	}else
	printf("Invalid\n");
	return 0;
	}
	
	

