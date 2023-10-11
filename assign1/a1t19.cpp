#include <iostream>

using namespace std;



int main() {
	cout << "Welcome to the Loan Amortisation Schedule. Please input, in order: \n \
	the principal amount,\n \
	the interest rate,\n \
	and the loan term, in months." << endl;
	double principal, interest, term;
	cin >> principal;
	cin >> interest;
	cin >> term;
	double permonth = ((principal + (principal * (interest/100))) / term);
	cout << permonth << endl;
	cout << principal << endl;
	cout << interest << endl;
	cout << term << endl;
	for (int i = 0; i < term; i++) {
		cout << "For month " << i << ": " << endl;
		cout << "You have paid " << (permonth * i) << endl;
		cout << "You must next pay " << permonth << endl;
		cout << "Your remaining balance is " << (principal + (principal * (interest/100)) - (permonth * i)) << endl;
	}
	return 0;
}
