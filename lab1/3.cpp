#include <cstdio>

int main() {
	int num1, num2;	

	//prompt
	printf("Enter the first number:");
	scanf("%d", &num1);
	printf("Second number:");
	scanf("%d", &num2);

	int sum = num1 + num2;

	printf("The sum of %d and %d is %d\n", num1, num2, sum);
	
	return 0;
}
