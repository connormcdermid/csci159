#include <iostream>
#include <algorithm> // I'm lazy and I'm going to use std::sort for now (introsort, worst case O(nlogn)

using namespace std;


void binarySearch(int arr[], int target, int lowerbound, int upperbound, int &left, int &right) {
	int cursor = (lowerbound + upperbound) / 2;

	if (target < arr[cursor]) {
		binarySearch(arr, target, lowerbound, cursor, left, right);
	} else if (target > arr[cursor]) {
		binarySearch(arr, target, cursor, upperbound, left, right);
	} else {
		left = cursor;
		right = cursor;
		cout << cursor << endl;
		int tmp = cursor - 1;
		while (arr[--tmp] == target) {
			left = tmp;
		}
		tmp = cursor;
		while (arr[++tmp] == target) {
			right = tmp;
		}
	}
}


int main() {
	// take user input for the array
	cout << "Please enter the number of integers you'd like to have in the array:" << endl;
	int n = 0;
	cin >> n;
	int arr[n];
	cout << "Please enter that number of integers, separated by spaces." << endl;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	std::sort(arr, arr+n); // introsort, runs in O(nlogn)

	int left, right = -1;


	cout << "Please let me know which number you'd like to remove from the array." << endl;
	int target;
	cin >> target; // target acquired
	binarySearch(arr, target, 0, n, left, right);
	cout  << left << " " << right << endl;
	for (int i = left; i <= right; i++) {
		arr[i] = 0;
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ", ";
	}
	cout << endl;
}

