#include<stdio.h>

int main(){
	int old_meter , new_meter , electricity_meter;
	printf("Nhap chi so dien cu : \n");
	scanf("%d" , &old_meter);
	printf("Nhap chi so dien moi : \n");
	scanf("%d" , &new_meter);
	electricity_meter = new_meter - old_meter;
	if(0 <= electricity_meter && electricity_meter < 50){
		printf("Tien dien la 10.000d \n");
	}else if(electricity_meter < 100){
		printf("Tien dien la 15.000d \n");
	}else if(electricity_meter < 150){
		printf("Tien dien la 20.000d \n");
	}else if(electricity_meter < 200){
		printf("Tien dien la 25.000d \n");
	}else{
		printf("Tien dien la 30.000d \n");
	}
	return 0;
}
