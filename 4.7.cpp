#include<stdio.h>

int main(){
	int n;
	printf("nhap so nam ");
	scanf("%d",&n);
	if(n%4==0 && n%100!=0){
		printf(" nam n�y l� nam nhuan ");
	}
	else if(n%400==0){
		printf(" nam n�y l� nam nhuan ");
	}
	else{
		printf("khong phai la nam nhuan ");
	}
	
	return 0;
}

