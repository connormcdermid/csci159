#include<cstdio>
int binary(int a[],int l,int m, int n)
	{
	if(m>=1)
		{
		int o=l+(m-1)/2;
		if(a[o]==n)
			return o;
		if(a[o]>n)
			return binary(a,l,o-1,n);
			return binary(a,o+1,m,n);
		}
	return -1;
	}
int main()
	{
	int x,y,z;
	printf("Enter the number of Elements in the Array ");
	scanf("%d",&y);
	int a[y];
	printf("Enter the Elements of the Array ");
	for(int i=0;i<y;i++)
		{
		scanf("%d",&a[i]);
		}
	printf("Enter the Element to search for ");
	scanf("%d",&x);
	z=binary(a,0,y-1,x);
	if(z==-1)
		printf("The Element is not present in the Array");
	else
		printf("The Element is present at index %d",z);
	return 0;
	}
