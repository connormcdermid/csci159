#include <iostream>

using namespace std;

double allToCAD(int init, double quantity) {
	switch (init) {
		case 1:
			return quantity * 1.36;
			break; // break statements will never be reached, but building good habits
		case 2:
			return quantity * 1.44;
			break;
		case 3:
			return quantity * 1.67;
			break;
		case 4:
			return quantity * 0.0091;
			break;
		default:
			return quantity;
			break;
	}
}
double CADtoall(int target, double quantity) {
	switch (target) {
		case 1:
			return quantity * 0.74;
			break;
		case 2:
			return quantity * 0.69;
			break;
		case 3:
			return quantity * 0.60;
			break;
		case 4:
			return quantity * 109.74;
			break;
		default:
			return quantity;
			break;
	}
}

int main() {
	
	char* currencies[5] = {"Canadian Dollar", "United States Dollar", "Euro", "Pound Sterling", "Japanese Yen"};
	cout << "Welcome to the Currency Exchange Rate Converter!" << endl;
	cout << "Please choose from the following list of available currencies to start with." << endl;
	for (int i = 0; i < sizeof(currencies)/sizeof(currencies[0]); i++) {  // array shouldn't have decayed at this
	// point so sizeof() should be fine for determining length. If required later I'll add a null terminator.
		cout << i << ": " << currencies[i] << endl;		
	}
	int initcur;
	cin >> initcur;
	if (initcur < 0 || initcur > 4) {
		cout << "That's not a valid currency." << endl;
		return 1;
	}
	cout << "How much of this currency do you have?" << endl;
	double quantity;
	cin >> quantity;

	cout << "What is your target curreny? Please reference the list from earlier." << endl;
	int tarcur;
	cin >> tarcur;
	float result;
	if (initcur != 0) {
		if (tarcur != 0) {
			result = CADtoall(tarcur, allToCAD(initcur, quantity));
		} else {
			result = allToCAD(initcur, quantity);
		}
	} else {
		result = CADtoall(tarcur, quantity);
	}
	switch (tarcur) {
		case 0:
			cout << "You have " << result << " CAD." << endl;
			break;
		case 1:
			cout << "You have " << result << " USD." << endl;
			break;
		case 2:
			cout << "You have " << result << " EUR." << endl;
			break;
		case 3:
			cout << "You have " << result << " GBP." << endl;
			break;
		case 4:
			cout << "You have " << result << " CAD." << endl;
			break;
	}
}
