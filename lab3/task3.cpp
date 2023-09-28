#include <iostream>
#include <stack>
#include <cmath>

using namespace std;

int main() {
	cout << "Please input a number: " << endl;
	int num;
	cin >> num;
	stack<int> sd;
	int digit;

	while (num != 0) {
		digit = num % 10;
		num /= 10;
		sd.push(digit);
	}

	//print
	while (!sd.empty()) {
		switch(sd.top()) {
			case 0:
				cout << "Zero ";
				break;
			case 1:
				cout << "One ";
				break;
			case 2:
				cout << "Two ";
				break;
			case 3:
				cout << "Three ";
				break;
			case 4:
				cout << "Four ";
				break;
			case 5:
				cout << "Five ";
				break;
			case 6:
				cout << "Six ";
				break;
			case 7:
				cout << "Seven ";
				break;
			case 8:
				cout << "Eight ";
				break;
			case 9:
				cout << "Nine ";
				break;
		}
		sd.pop();
	}
}
