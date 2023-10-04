#include <iostream>

using namespace std;

long long unsigned int factorial(int n) {
	long long unsigned int fin = 1;
	for (int i = n; i > 1; i--) {
		fin *= i;
	}
	return fin;
}

int main() {
	cout << "Please enter your number: " << endl;
	int num;
	cin >> num;

	if (num < 0) {
		cout << "Please enter a number larger than zero." << endl;
		return 1;
	}
	long long unsigned int end;
	end = factorial(num);
	cout << "The factorial of " << num << " is " << end << "." << endl;

}

