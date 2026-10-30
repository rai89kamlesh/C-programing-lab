// W.C.P to check whether the number is perfect or not
#include<stdio.h>
int main() {
	int n;
	printf("enter the num");
	scanf("%d",&n);
	int sum=0;
	int i=1;
	while(i<n) {
	
	if(n%i==0){
		sum=sum+i;
	}
	i++;
}
	if(sum==n){
		printf("perfect number");
	}
	else
	{
		printf("not perfect number");
	}
	return 0;
	
}
