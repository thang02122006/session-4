#include<stdio.h>

int main(){
	int a,b,c,temp;
	printf("moi ban nhap so a= ");
	scanf("%d",&a);
	printf("moi ban nhap so b= ");
	scanf("%d",&b);
	printf("moi ban nhap so c= ");
	scanf("%d",&c);
	printf("truoc khi sap xep:%d %d %d \n",a,b,c);
	if(a>b){
		temp=a;
		a=b;
		b=temp;
	}
	if(a>c){
		temp=a;
		a=c;
		c=temp;
	}
	if(b>c){
		temp=b;
		b=c;
		c=temp;
	}
	printf("sau khi sap xep tu nho toi lon: %d %d %d ",a,b,c);
	
	return 0;
}
