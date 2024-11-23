#include<stdio.h>

int main(){
	int day , month , year;
	printf("Nhap lan luot ngay , thang , nam : ");
	scanf("%d %d %d" , &day , &month , &year);
	if(year < 0){
		printf("Nam khong hop le \n");
		return 1;
	}
	if(month<1 || month > 12){
		printf("Thang khong hop le \n");
		return 1;
	}
	int dayInMonth;
	if(month == 2){
		if(year % 400 == 0){
			dayInMonth = 29;
		}else{
			dayInMonth = 28;
		}
	}else if(month == 4 || month == 6 || month == 9 || month == 11){
		dayInMonth = 30;
	}else{
		dayInMonth = 31;
	}
	if(day < 1 || day > dayInMonth){
		printf("Ngay khong hop le . Thang %d chi co %d ngay \n",month,dayInMonth);
		return 1;
	}
	printf("Ngay %d thang %d nam %d hop le \n",day,month,year);
	return 0;
	return 0;
}
