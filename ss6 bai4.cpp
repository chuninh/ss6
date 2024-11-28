#include<stdio.h>
int main(){
	int a,b,c;
	float x1,x2,delta;
	printf("moi ban nhap vao a");
	scanf("%d",&a);
	printf("moi ban nhap vao b");
	scanf("%d",&b);
	printf("moi ban nhap vao c");
	scanf("%d",&c);
	if(a =0){
		if(b =0){
			if(c =0){
				printf("phuong trinh vo nghiem");
			}else{
				printf("phuong trinh co vo so nghiem");
			}
		}else{
			printf("%f = -c/b");
		}
	}
	
	
	
	return 0;
	
}
