#include <stdio.h>
#include <stdlib.h>


int thanhtien(int slg,int dongia){
	return(slg*dongia);
	
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int slg,dongia;
	int thanhtoan,tongtien;
	char luachon,Tenhh;
	do{
		printf("Hay nhap ten hang hoa: \n");
		fflush(stdin);
		scanf("%c", &Tenhh);
		printf("Hay nhap so luong: \n");
		fflush(stdin);
		scanf("%d", &slg);
		printf("Hay nhap don gia: \n");
		fflush(stdin);
		scanf("%d", &dongia);
		thanhtoan=thanhtien(slg,dongia);
		printf("Thanh tien la: %d\n", thanhtoan);
		printf("Ban co muon tiep tuc Y/N: \n");
		fflush(stdin);
		scanf("%c", &luachon);
		tongtien+=thanhtoan;
	}
	while(luachon=='y'||luachon=='Y');
	printf("Tong tien thanh toan la: %d\n", tongtien);
	return 0;
	
}
