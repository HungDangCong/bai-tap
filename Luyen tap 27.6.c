#include <stdio.h>
#include <stdlib.h>
int min(int a[5]){
	int i,vitri,min;
	min=a[0];
	for(i=0;i<5;i++){
		if(min>a[i]){
		min=a[i];
		vitri=i;}
	}
	printf("Gia tri nho nhat la: %d tai vi tri: %d\n", min,vitri);
	
}
int max(int a[5]){
	int i,vitri,max;
	max=a[0];
	for(i=0;i<5;i++){
		if(max<a[i]){
			max=a[i];
			vitri=i;
		}
	}
	printf("Gia tri lon nhat: %d tai vi tri: %d\n", max,vitri);
}
int tong(int a[5]){
	int i,vitri,tong;
	float tb;
	tong=0;
	for(i=0;i<5;i++)
	tong += a[i];
	tb=tong/i;
	printf("Gia tri tong la: %d\n", tong);
	printf("Gia tri trung binh la: %2.f", tb);

}


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[5]={21,17,15,33,47};
	
	min(a);
	max(a);
	tong(a);


	
	
	return 0;
}
