/* W.C.P TO NPRINT THIS PATTERN
12345 
 1234
  123
   12
    1 */
#include<stdio.h>
int main() {
	int n=5;
	printf("enter the bnumber");
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
		for(int k=1; k<i; k++){
			printf(" ");
		}
		for(int k=1;k<=n-i+1;k++){
		printf("%d",k);
	}
	printf("\n");
}
return 0;
}
