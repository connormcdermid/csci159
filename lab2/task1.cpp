#include <iostream>
using namespace std;

int main() {
	cout << "Please enter your age." << endl;
	int age;
	cin >> age;
	if (age < 20 || age > 60) {
		cout << "ERROR." << endl;
		return 1;
	}
	cout << "Please enter your sex -- [M]ale or [F]emale." << endl;
	char sex;
	cin >> sex;
	cout << "Finally, please enter your marital status -- [Y]es or [N]o." << endl;
	char mstat;
	cin >> mstat;

	if (sex == 'M' && age >= 20 && age <= 40) {
		cout << "You may work anywhere." << endl;
	}
	else {
		cout << "You may work in urban areas only." << endl;
	}
	return 0;

}
