#include<stdio.h>
int main(){
	int n,i;
	printf("moi ban nhap 1 so nguyen");
	scanf("%d",&n);
	for(i =1;i<=n;i++){
		if(n % i ==0){
		    printf("%d",i);
	    }
	}
	
}
