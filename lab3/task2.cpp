#include <iostream>

using namespace std;

int main() {
	cout << "a." << endl;
	for (int i = 1; i < 5; i++) {
		for (int j = i; j > 0; j--) {
			printf("*");
		}
		printf("\n");
	}

	cout << "b." << endl;
	for (int i = 0; i < 7; i+=2) {
		for (int j = i; j < 6; j+=2) {
			printf(" ");
		}
		for (int j = 1; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 4; i > 0; i-=2) {
		for (int j = 6; j > i; j-=2) {
			printf(" ");
		}
		for (int j = i; j > 1; j--) {
			printf("*");
		}
		printf("\n");
	}

	cout << "c." << endl;

	for (int i = 8; i > 0; i-=2) {
		for (int j = 10; j > i; j-=2) {
			printf(" ");
		}
		for (int j = i; j > 1; j--) {
			if (j % 2 == 0) {
				printf("1");
			} else {
				printf("0");
			}
		}
		printf("\n");
	}
}
