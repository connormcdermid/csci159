#include<cstdio>
void Hanoi(int n,char x,char y, char z)
{
if(n==0)
{
return;
}
Hanoi(n-1,x,y,z);
printf("move disk %d from rod %c to rod %c \n",n,x,y);
Hanoi(n-1,z,y,x);
}
int main()
{
int N;
printf("Enter N, the number of disks on the tower: ");
scanf("%d",&N);
Hanoi(N,'A','B','C');
return 0;
}

