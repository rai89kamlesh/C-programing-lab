// wcp sum of the following series 1!+3!+5! upto n numbers
#include<stdio.h>
int main() 
{
	int i=1,c=1,a=1,n;
	long int fact,sum=0;
	printf("enter the no,o terms");
	scanf("%d",&n);
	while(c<=n) {
		i=1;
		fact=1;
		i++;
	}
	while(i<=a){
		fact=fact*i;
		i++;
		
	}
	sum=sum=fact;
	c++;
	a=a+2;
	
		
	}
	printf("the sum of num%d",sum);
	return 0;
}


