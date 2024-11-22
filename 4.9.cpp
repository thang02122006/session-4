#include<stdio.h>

int main(){
	int a,b,c;
	printf("ngay ");
	scanf("%d",&a);
	printf("thang ");
	scanf("%d",&b);
	printf("nam ");
	scanf("%d",&c);
	switch(b){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			if(0<a && a<= 31){
				printf("ngay %d thang %d nam %d",a,b,c);
			}
			else{
				printf("khong hop le");
			}
			break;
		case 4: case 6: case 9: case 11:
		 	if(0<a && a<=30){
		 		printf("ngay %d thang %d nam %d",a,b,c);
		    }
			 else{
				printf("khong hop le");
		    }
		    break;
		case 2:
			if(0<a && a<= 29){
				printf("ngay %d thang %d nam %d",a,b,c);
			}
			else{
				printf("khong hop le");
			}
			break;
		default:
		    printf("khong hop le");
    }
    
    return 0;
}
