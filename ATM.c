#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int sodu=1000000000;
int user = 123, pass = 456;
int login (int user, int pass){	

    printf("Xin moi nhap user: \n");
	scanf("%d",&user);
	printf("Xin moi nhap password: \n");
	scanf("%d",&pass);
		if(user==123&&pass==456){
			printf("Ban da dang nhap thanh cong\n");
			return (1);
		}
		else{
			printf("Thong tin tai khoan khong dung\n");
		}
return (0);
} 
int ruttien(int num)							
{
int sotien; 							
        printf("Xin moi nhap so tien can rut: ");
		scanf("%d",&sotien);
	if(sotien<=3000000&&sotien%50000==0&&sotien<=sodu)
		{
			sodu=sodu-sotien;
		printf("Giao dich thanh cong. moi ban nhan tien\n");
		printf("So du trong tai khoan la: %d\n",sodu);		
		}
			else if (sotien>sodu){
				printf("So tien giao dich vuot qua so du\n");
			}
				else if(sotien>3000000){
					printf("So tien cho 1 lan giao dich khong vuot qua: 3000000\n");
				}
					else if(sotien%50000!=0){
						printf("So tien thuc hien giao dich phai chia het cho: 50000\n");
					}
}
int chuyenkhoan(int stknhan, int sotienck)					
{	
        printf("Xin moi nhap so tai khoan nhan: \n");
		scanf("%d",&stknhan);
		fflush(stdin);
		printf("Xin moi nhap so tien can chuyen: \n");
		scanf("%d",&sotienck);
	if(sotienck<=sodu){
			sodu=sodu-sotienck;
			printf("Ban da chuyen thanh cong so tien: %d cho so tai khoan: %d\n",sotienck,stknhan);
			printf("So du tai khoan la: %d\n", sodu); 
		}
	else{
				printf("So du tai khoan khong du de thuc hien giao dich \n");
			}
}
int ktrasodu()				
{
	printf("So tien trong tai khoan cua quy khach la: %d\n",sodu);
}
int main(int argc, char *argv[]) {
int luachon3;
int user, pass;
int stknhan,sotienck;
int num;
char luachon4;
if(login(user,pass)==1){
	printf("Xin chao quy khach \n");
do{
	printf("1. Rut tien\n");
	printf("2. Chuyen khoan\n");
	printf("3. Kiem tra so du\n");
	printf("4. Ket thuc\n");
	printf("Moi ban nhap lua chon: \n");
	fflush(stdin); 
	scanf("%d",&luachon3);
    switch(luachon3){
					case 1:
					ruttien(num);
					break;
					case 2:
					chuyenkhoan(stknhan,sotienck);
					break;
					case 3:
					ktrasodu(sodu);
					break;
					case 4:
					printf("Tam biet quy khach\n");
					break;
					}
    printf("Ban co muon tiep tuc Y/N \n");
    fflush(stdin);
    scanf("%c", &luachon4);
}
while (luachon4!='N'&&luachon4!='n');
}
else
return 0;
}

	

