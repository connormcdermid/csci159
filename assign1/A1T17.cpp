#include <iostream>

using namespace std;

int main() {
	int rowsA;
	int colsA;
	cout << "Please tell me the dimensions of your matrix -- columns first." << endl;
	cin >> colsA;
	cout << "Now, the rows." << endl;
	cin >> rowsA;
	

	// fill the matrix
	cout << "Please tell me the elements of your matrix, one at a time, in reading order." << endl;
	int matrixA[rowsA][colsA];
	for (int i = 0; i < colsA; i++) {
		for (int j = 0; j < rowsA; j++) {
			cin >> matrixA[i][j];
		}
	}
	// now, same for the second matrix
	int rowsB;
	int colsB;
	cout << "Please tell me the dimensions of your second matrix -- columns first." << endl;
	cin >> colsB;
	cout << "Now, the rows." << endl;
	cin >> rowsB;

	cout << "Please tell me the elements of your second matrix, one at a time, in reading order." << endl;
	int matrixB[rowsB][colsB];
	for (int i = 0; i < colsB; i++) {
		for (int j = 0; j < rowsB; j++) {
			cin >> matrixB[i][j];
		}
	}

	// dot product of two matrices produces a matrix with the same number of rows as the first matrix and the
	// same number of columns as the second
	int result[rowsA][colsB] = {0};
	for (int i = 0; i < rowsA; i++) {
		for (int j = 0; j < colsB; j++) {
			result[i][j] = 0;
		}
	}
	// traverse the matrix to find our destination
	for (int i = 0; i < colsB; i++) {
		for (int j = 0; j < rowsA; j++) {
			for (int k = 0; k < rowsB; k++) {
				result[i][j] += matrixA[i][k] * matrixB[k][j]; // then multiply for each value
			}
		}
	}
	cout << "---------------" << endl;
	// and print the final matrix
	for (int i = 0; i < rowsA; i++) {
		for (int j = 0; j < colsB; j++) {
			cout << result[i][j] << " ";
		}
		cout << endl;
	}

}
