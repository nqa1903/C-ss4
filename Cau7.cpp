#include<stdio.h>

int main(){
	int year;
	printf("Nhap vao nam muon kiem tra : ");
	scanf("%d",&year);
	if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
		printf("%d la nam nhuan",year);
	}else{
		printf("%d khong phai la nam nhuan",year);
	}
	return 0;
}
