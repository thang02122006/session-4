#include<stdio.h>

int main(){
	int a,b,c;
	printf("nhap so nguyen a ");
	scanf("%d",&a);
	printf("nhap so nguyen b ");
	scanf("%d",&b);
	printf("nhap so nguyen c ");
	scanf("%d",&c);
	if(a>=c && c>=b){
		printf("so thu 3 nam trong khoang 2 so con lai");
	}
	else if(a<=c && c<=b){
		printf("so thu 3 nam trong khoang 2 so con lai");
	}
	else{
		printf("so thu 3 khong nam trong 2 so con lai");
	}
	
	return 0;
}
