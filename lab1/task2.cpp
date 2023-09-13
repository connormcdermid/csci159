#include <cstdio>

int main() {
	//formula mi = km * 0.621371
	int km;
	printf("Enter the kms");
	scanf("%d", &km);

	double mi = km * 0.621371;

	printf("Miles: %lf", mi);
}
