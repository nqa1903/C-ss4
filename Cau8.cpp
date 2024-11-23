#include<stdio.h>

int main(){
	float sideA , sideB , sideC;
	printf("Nhap lan luot 3 canh : ");
	scanf("%f %f %f",&sideA,&sideB,&sideC);
	if(sideA < 0 || sideB < 0 || sideC < 0){
		printf("Khong la 3 canh tam giac \n");
		return 1;
	}
	if(sideA + sideB > sideC && sideB + sideC > sideA && sideC + sideA > sideB){
		printf("La 3 canh cua tam giac \n");
	}else{
		printf("Khong la 3 canh tam giac \n");
	}
	return 0;
}
