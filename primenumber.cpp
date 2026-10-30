// w.c.p to check prime or not
#include<stdio.h>
int main(){
	int n;
	printf("enter the number");
	scanf("%d",&n);
	int i=1;
	int count=0;
	while(i<=n){
		if(n%i==0){
			count++;
		}
		i++;
		
	}
	if(count==2){
		printf("prime number");
	}
	else
	{
		printf("not prime number");
	}
	return 0;
}

