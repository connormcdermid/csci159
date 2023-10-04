#include <iostream>
#include <cmath>
#include <stack>

using namespace std;

const char* transliterate(int num) {
	const char* word;
	switch(num) {
		case 0:
			word = "Zero";
			break;
		case 1:
			word = "One";
			break;
		case 2:
			word = "Two";
			break;
		case 3:
			word = "Three";
			break;
		case 4:
			word = "Four";
			break;
		case 5:
			word = "Five";
			break;
		case 6:
			word = "Six";
			break;
		case 7:
			word = "Seven";
			break;
		case 8:
			word = "Eight";
			break;
		case 9:
			word = "Nine";
			break;
	}
	return word;
}

int main() {
	cout << "Please input a number: " << endl;
	int num;
	stack<int> sd;
	cin >> num;
	// separate the number into digits
	int digit;
	do {
		digit = num % 10;
		cout << digit << endl;
		num /= 10;
		sd.push(digit);
	} while (digit != 0);
	sd.pop();
	while (!sd.empty()) {
		cout << transliterate(sd.top()) << " ";
		sd.pop();
	}
}
