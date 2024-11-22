#include<stdio.h>;

int main(){
	int a,b,W;
	printf("nhap so cong to dien dau thang ");
	scanf("%d",&a);
	printf("nhap so cong to dien cuoi thang ");
	scanf("%d",&b);
	W=b-a;
	if(0<=W && W<50){
		printf("tien dien trong thang nay la %d nghin dong",W*10);
	}
	else if(50<=W && W<100){
			printf("tien dien trong thang nay la %d nghin dong",W*15);
	}
	else if(100<=W && W<150){
			printf("tien dien trong thang nay la %d nghin dong",W*20);
    }
    else if(150<=W && W<200){
			printf("tien dien trong thang nay la %d nghin dong",W*25);
	}
	 else if(200<=W){
			printf("tien dien trong thang nay la %d nghin dong",W*30);
	}
	
	return 0;
}
