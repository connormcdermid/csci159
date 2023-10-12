#include <iostream>
using namespace std;

float APS(int n, float cd, float ft){
	float sum = 0;

	for (int i=0; i<n; i++){
		sum = sum + ft;
		ft = ft + cd;
	}
	return sum;
}

int main(){
	int N;
	float CD, FT;

	cout << "Input the amount of terms: " << endl;
	cin >> N;

	cout << "Input the Common Difference: " << endl;
	cin >> CD;

	cout << "Input the First Term in the sequence: " << endl;
	cin >> FT;

	float sum = APS(N,CD,FT);

	cout << "The sum is " << sum << "." <<endl;

	return 0;
}
