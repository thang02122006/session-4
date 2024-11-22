#include<stdio.h>

int main(){
	int a,b,c;
	printf("nhap canh thu nhat ");
	scanf("%d",&a);
	printf("nhap canh thu hai ");
	scanf("%d",&b);
	printf("nhap canh thu ba ");
	scanf("%d",&c);
	if(a+b>c && a+c>b && b+c>a){
		printf("la ba canh cua tam giac");
	}
	else{
		printf("khong phai la ba canh cua tam giac");
	}
	
	return 0;
}
