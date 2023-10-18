#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main() {
	cout << "Please enter a string: " << endl;
	string test = ""; // please make sure to initialise your strings to empty string! removes undefined behaviour.
	getline(cin, test); // a slightly different getline() invocation than task1: this one (std::getline(), instead of std::cin.getline())designed for use with std::strings instead of cstrings.
	cout << "Now, a second string: " << endl;
	string second = "";
	getline(cin, second);
	string result = test + second; // when using std::strings, + is the concatenation operator.
	cout << result << endl;
}
