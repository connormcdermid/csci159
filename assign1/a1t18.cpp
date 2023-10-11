#include <iostream>

using namespace std;

int main() {
	/*
		The requested program is the Sieve of Eratosthenes without:
		* recursion
		* strings
		* arrays (problem!)
		* I/O

		The Sieve works by remembering the composites of primes that it's found. A "forgetful" Sieve 
		that doesn't use arrays really isn't a Sieve of Eratosthenes at all.
		Below this comment is an algorithm that will apply a Sieve-*like* algorithm to find all
		primes *below 100*, but I believe a Sieve that works for an arbitrarily large N without using the
		above, especially arrays, is impossible.

			- Connor McDermid
	*/
	
	cout << 2 << endl;
	int m3 = 9;
	int m5 = 25;
	int m7 = 49;
	for (int i = 3; i < 100; i += 2) {
		if (i != m3 && i != m5 && i != m7) {
			cout << i << endl;
		} else {
			if (i == m3)
				m3 += 6;
			if (i == m5)
				m5 += 10;
			if (i == m7)
				m7 += 14;
		}
	}
	cout << "Done." << endl;
}

