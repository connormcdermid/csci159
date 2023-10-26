#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

void getUnion(int a[], int n, int b[], int m) {
    unordered_set<int> unionSet(a, a + n);

    for (int i = 0; i < m; i++) {
        unionSet.insert(b[i]);
    }

    cout << "Union of both arrays: ";

    for (int element : unionSet) {
        cout << element << " ";
    }
    cout << endl;
}

int main() {
    int size1, size2;

    cout << "Enter the size of the first array: ";
    cin >> size1;

    cout << "Enter the elements of the first array (space-separated): ";
    vector<int> array1(size1);
    for (int i = 0; i < size1; i++) {
        cin >> array1[i];
    }

    cout << "Enter the size of the second array: ";
    cin >> size2;

    cout << "Enter the elements of the second array (space-separated): ";
    vector<int> array2(size2);
    for (int i = 0; i < size2; i++) {
        cin >> array2[i];
    }

    getUnion(array1.data(), size1, array2.data(), size2);

    return 0;
}
