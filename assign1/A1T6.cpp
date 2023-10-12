#include <iostream>
using namespace std;

bool TriCheck(int n){
	if (n < 0){
		return false;
	}
	
	int s = 0;
	for (int i = 1; s <= n; i++){
		s = s + i;
		if (s==n){
			return true;
		}
	}
	
	return false;
}

int main(){
	int n;
	
	cout << "please input a positive integer: ";
	cin >> n;
	
	if (TriCheck(n)){
		cout << "Input is a triangular number!" << endl;
	} else{
		cout << "Input is NOT a triangular number!" << endl;
	}
	
	return 0;
}
