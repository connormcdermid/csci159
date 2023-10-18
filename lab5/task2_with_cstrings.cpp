#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char first[1000] = {'\0'}; // null-terminate your strings!
	char second[1000] = {'\0'};
	cout << "Please input a sentence: " << endl;
	cin.getline(first, sizeof(first)); // see task 1
	cout << "Now, a second sentence: " << endl;
	cin.getline(second, sizeof(second));
	int firstlen = strlen(first); // don't need a result string, plenty of room in this array.
	for (int i = 0; i < strlen(second); i++) { // just need to offset i properly.
		first[firstlen + i] = second[i];
	}
	cout << first << endl;
}
