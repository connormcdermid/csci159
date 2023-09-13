#include <cstdio>

double average(int* nums) {
	int sum = *nums + *(nums + 1) + *(nums + 2) + *(nums + 3);
	double avg = sum / 4;
	return avg;
}
int main() {
	int num1, num2, num3, num4;
	printf("Input the first two numbers (separated by a space)\n");
	scanf("%i %i", &num1, &num2);

	printf("Input the next two numbers (separated by a space)\n");
	scanf("%i %i", &num3, &num4);

	printf("You inputted %i %i %i %i, with a sum of %d\n", num1, num2, num3, num4, num1 + num2 + num3 + num4);

	int nums[4] = {num1, num2, num3, num4};
	printf("%i\n", *nums);
	double avg = average(nums);
	printf("%d is the average.", avg);

}

