//1+2+4+7+11.............N TERMS CALCULATE SUM
#include<stdio.h>
int main() {
	int n;
	int term=1;
	int sum=0;
	int diff=1;
	int i=1;
	printf("enter the num");
	scanf("%d",&n);
	while(i<=n) {
		sum=sum+term;
		term=term+diff;
		diff+=1;
		i+=1;
	}
	printf("the sum is%d",sum);
	return 0;	
}
