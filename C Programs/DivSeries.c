/*  
C program to find sum of following series and also print the series
 1+ 1/2 + 1/3 + 1/4 + 1/5 + .. 1/N
*/
#include<stdio.h>
main(){
	int n,i;
	float sum = 0.0f;
	printf("Enter the number");
	scanf("%d ",&n);
	printf("Series is ");
	for(i = 1; i <= n; i++){
		sum = sum + ((float)1/(float)i);
		printf("% d / %d + ",1,i);
	}
	printf(" = %f ",sum);	
}

