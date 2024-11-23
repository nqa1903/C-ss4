#include<stdio.h>

int main(){
	int a , b ,c;
	printf("Nhap vao 3 so : \n");
	scanf("%d %d %d" , &a , &b , &c);
	if(b <= c && c <=a){
		printf("%d nam trong khoang %d va %d",c,b,a);
	}else{
		printf("%d khong nam trong khoang %d va %d",c,b,a);
	}
	return 0;
}
