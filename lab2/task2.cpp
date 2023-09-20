#include <iostream>

using namespace std;

int main() {
	cout << "Please input a four-digit number." << endl;
	int num;
	cin >> num;

	if (num <= 999 || num >= 10000) {
		cout << "That's not a four-digit number. I can't believe you would do that." << endl;
		return 1; // quit in rage
	}
	if (num / 1000 == num % 10 && ((num / 100) % 10) == ((num/10) % 10)) {
		cout << "This looks suspiciously like a palindrome..." << endl;
	}

	// first iteration
	int d1 = (num % 10) * 1000;
	num /= 10;
	// second iteration
	int d2 = (num % 10) * 100;
	num /= 10;
	// third iteration
	int d3 = (num % 10) * 10;
	num /= 10;
	int d4 = num;
	// fourth iteration
	int ret = d1 + d2 + d3 + d4;
	cout << ret << endl;
	return 0;
}
