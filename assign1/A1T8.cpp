#include <iostream>
using namespace std;

float GPS(int n, float cr, float ft){
	float sum = 0;

	for (int i=0; i<n; i++){
		sum = sum + ft;
		ft = ft * cr;
	}
	return sum;
}

int main(){
	int N;
	float CR, FT;

	cout << "Input the amount of terms: " << endl;
	cin >> N;

	cout << "Input the Common Ratio: " << endl;
	cin >> CR;

	cout << "Input the First Term in the sequence: " << endl;
	cin >> FT;

	float sum = GPS(N,CR,FT);

	cout << "The sum is " << sum << "." <<endl;

	return 0;
}
