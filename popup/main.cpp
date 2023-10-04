#include <iostream>

using namespace std;

bool isSqr(float len, float wid) {
	return len == wid;
}

int main() {
	float len, wid;

	cout << "Please enter the length of the rectangle." << endl;
	cin >> len;
	cout << "Please enter the width of the rectangle." << endl;
	cin >> wid;
	if (len <= 0 || wid <= 0) {
		cout << "A rectangle can't have a dimension equal to or less than zero. Please try again." << endl;
		return 1;
	}
	if (isSqr(len, wid)) {
		cout << "Yes, this shape is a square!" << endl;
	} else {
		cout << "No, this is not a square, just a rectangle." << endl;
	}
	return 0;
}
