#include<cstdio>
int main()
	{
	int a,b,c,d;
	float r1,r2;
	printf("Enter the terms a,b,c for the quadratic ax^2+bx+c \n");
	printf("Enter a \n");
	scanf("%d",&a);
	printf("Enter b \n");
	scanf("%d",&b);
	printf("Enter c \n");
	scanf("%d",&c);
	d=(b*b)-(4*a*c);
	a=a*2;
	if(d<0)
		{
		printf("The roots are imaginary");
		return 420;
		}
	r1=(d-b)/a;
	r2=(-b-d)/a;
	if(d==0)
		{
		printf("the roots are real and equal at %f",r1)
		return 0;
		}
	printf("The roots are real but unequal at %f and %f",r1,r2);
	}
