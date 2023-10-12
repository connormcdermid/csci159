#include<cstdio>
long long int factorial(int a)
	{
	long long int b=1;
	for(int i=1;i<=a;i++)
		{
		b=b*i;
		}
	return b;
	}
int main()
	{
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	long long int o=factorial(n);
	long long int p=factorial(2*n);
	long long int q=factorial(n+1);
	long long int r= p/(q*o);
	printf("The %d th catalan number is %d",n,r);
	}

