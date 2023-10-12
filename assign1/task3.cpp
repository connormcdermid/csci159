#include<cstdio>
bool pal(int a)
	{
	int copy=a,r=0,d;
	while (copy>0)
		{
		d=copy%10;
		r=r*10+d;
		copy=copy/10;
		}
	if(r==a)
		{
		return 1;
		}
	return 0;
	}
bool prime(int a)
	{
	int count=0;
	for(int i=2;i<=a/2;i++)
		{
		if(a%i==0)
			{
			count++;
			break;
			}
		}
	if(count==0)
		return 1;
	return 0;
	}
int main()
	{
	int n,count=1,m;
	printf("Enter the number of palindromic prime numbers to find ");
	scanf("%d",&n);
	m=n;
	while (n>0)
		{
		if(pal(count)&&prime(count))
			{
			printf("%d \n",count);
			n--;
			}
		count++;
		}
	printf("Above are the first %d palindromic prime numbers",m);
	}
