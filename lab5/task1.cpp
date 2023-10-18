#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
	char sentence[1000] = {'\0'}; // null-terminate your strings, fools. This is how <cstring>'s functions work.
	cout << "Please enter a sentence: " << endl;
	cin.getline(sentence, sizeof(sentence)); // gotta use getline -- cin with stream operators stops listening after a lexical word
	cout << sentence << endl;				 // otherwise, you only get "Hello," and not "Hello, World"
	cout << strlen(sentence) << endl;
	for (int i = strlen(sentence) - 1; i >= 0; i--) { // strlen, provided by <cstring>, finds the length of a string (not the size of its array!) by looking for the null-terminator at the end.
		cout << sentence[i];
	}
	cout << endl;
}
