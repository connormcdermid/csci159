#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>

using namespace std;

int main() {
	cout << "Please input the size of your first array." << endl;
    int nA;
    cin >> nA;
    cout << "Please input the first array, separated by spaces." << endl;
    vector<int> A;
    int tmp;
    for (int i = 0; i < nA; i++) {
        cin >> tmp;
        A.push_back(tmp);
    }

	cout << "Please input the second array's size, same as before." << endl;
	vector<int> B;
	tmp = 0;
	int nB;
    cin >> nB;
    cout << "Now the second array, same as before." << endl;
    for (int i = 0; i < nB; i++) {
        cin >> tmp;
        B.push_back(tmp);
    }

	vector<int> intersection ;
	for (int i = 0; i < A.size(); i++) {
		for (int j = 0; j < B.size(); j++) {
			if (A[i] == B[j]) {
				intersection.push_back(A[i]);
			}
		}
	}

	for (int i = 0; i < intersection.size(); i++) {
		cout << intersection[i] << ", ";
	}

}
