#include<cstdio>
void print(int b[],int n)
	{
	for(int i=0;i<n;i++)
	printf("%d",b[i]);
	printf("\n");
	}
int main()
	{
	int n,x,y,i,j;
	printf("Enter N ");
	scanf("%d",&n);
	int a[n];
	int b[n];
	for (i=0;i<n;i++)
		{
		a[i]=i+1;
		}
    x=a[n-1];
	for(j=1;j<=n;j++)
		{
	        for(i=0;i<n;i++)
	                {
	                y=a[n-1];
	                a[n-1]=x;
	                x=a[i];
	                print(a,n);
			}
		}
	}