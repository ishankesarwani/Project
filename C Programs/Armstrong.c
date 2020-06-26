//Armstrong number is a number whose sum
//is equal to the sum of its cube
//for eg. 153 = 1^3+5^3+3^3
#include<stdio.h>
main()
{
	int n,i,sum = 0,x,r;
	printf("Enter a number");
	scanf("%d",&n);
    r = n;
    while(n > 0){
    	x = n%10;
    	sum = sum + (x*x*x);
    	n = n/10;
	}
	if(r == sum){
		printf("Armstrong number");
	}
	else{
		printf("Not an armstrong number");
	}
}

