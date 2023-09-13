#include <cstdio>

int main() {
	int num1, num2, num3, num4;

	printf("first 2, separated by space");
	scanf("%d %d", &num1, &num2);

	printf("next 2, same thing");
	scanf("%d %d", &num3, &num4);
	printf("%i %i %i %i\n", num1, num2, num3, num4);	
	
	double sum = num1 + num2 + num3 + num4;
	int sum2 = num1 + num2 + num3 + num4;
	double avg = sum/4;

	printf("The total is %i and the average is %.2lf", sum2, avg);
}
