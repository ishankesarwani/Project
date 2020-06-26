#include<stdio.h>
main(){
	float r , a;
	float pi = 3.14;
	printf("Enter the radius of the circle");
	scanf("%f",&r);
	a = pi*r*r;
	printf("Area of the circle with radius %f is %f",r,a);
}
