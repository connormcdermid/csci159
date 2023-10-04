#include <iostream>
#include <stack>

using namespace std;

int isolator(int num, int pos) { // pos is 0-indexed
	int fin;
	for (int i = 0; i <= pos; i++) {
		fin = num % 10;
		num /= 10;
	}
	return fin;
}

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

	int arr[4] = {0};
	
	for (int i = 0; i < 4; i++) {
		arr[i] = isolator(num, i);
	}
	for (int i = 0; i < 4; i++) {
		printf("%d", arr[i]);
	}
}
