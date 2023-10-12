#include <iostream>

using namespace std;

int main() {
	cout << "Please enter the number of natural numbers to sum." << endl;
	int n = 0;
	cin >> n;
	float result = (n * (n + 1))/2;
	cout << result << endl;
}
