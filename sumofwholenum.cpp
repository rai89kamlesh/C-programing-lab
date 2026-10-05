//w.c.p to find the sum of a digits of a whole num
#include<stdio.h>
int main() {
	int num,digit;
	int sum=0;
	printf("enter the num");
	scanf("%d",&num);
	while(num>0) {
		digit=num%10;
		sum=sum+digit;
		num=num/10;
			
		
	}
	printf("the sum is%d",sum);
}

