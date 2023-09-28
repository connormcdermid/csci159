#include <iostream>

using namespace std;

int factorial(int n) {
	if (n == 0) {
		return 0;
	}
	if (n == 1) {
		return 1;
	}
	return n*factorial(n-1);
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

