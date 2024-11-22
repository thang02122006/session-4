#include<stdio.h>

int main(){
	int n;
	printf("nhap so nguyen ");
	scanf("%d",&n);
	if(n>0){
		printf("so duong");
	}
	else if(n<0){
		printf("so am");
	}
	else{
		printf("khong là so am cung khong la so duong");
	}
	
	return 0;
}
