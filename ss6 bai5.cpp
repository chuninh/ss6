#include<stdio.h>
int main(){
	int year,month,day;
	printf("moi ban nhap nam");
	scanf("%d",&year);
	printf("moi ban nhap thang");
	scanf("%d",&month);
	if(month = 2 && year % 4 ==0 && year % 100 !=0||year % 400 ==0){
		printf("co 29 ngay");
	}
	
	if(month = 2 && year > 0){
		printf("co 28 ngay");
    }
    
    if(month =1 ||3||5||7||8||10||12 && year >0){
    	printf("co 31 ngay");
    }
	


	return 0;
	
}
	
	
