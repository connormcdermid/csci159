#include <iostream>
//#include <string>
//#inglude <vector>
#include <cmath>
// more includes go here

using namespace std;

class Calculator {
	private:
		double answer;
		double operandA;
		double operandB;
	public:
		Calculator() {
			// default constructor
		}

		Calculator(double a, double b): operandA(a), operandB(b) {} // second constructor w/ init list
		
		// don't need a destructor since we don't deal with any type of memory allocation
		
		Calculator* setA(double a) {
			this->operandA = a;
			return this;
		}

		Calculator* setB(double b) {
			this->operandB = b;
			return this;
		}

		double getA() {
			return this->operandA;
		}

		double getB() {
			return this->operandB;
		}

		double getAnswer() {
			return this->answer;
		}
		
		Calculator* add() {
			this->answer = this->operandA + this->operandB;
			return this;
		}

		Calculator* subtract() {
			this->answer = this->operandA - this->operandB;
			return this;
		}

		Calculator* multiply() {
			this->answer = this->operandA *	this->operandB;
			return this;
		}

		Calculator* divide() {
			if (this->operandB == 0) {
				cout << "YOU FOOL! YOU CANNOT DIVIDE BY ZERO! YOU'LL KILL US ALL!" << endl;
				exit(-1);
			}
			this->answer = this->operandA / this->operandB;
			return this;
		}
		
		double get() {
			return this->getAnswer(); // alias getAnswer to get
		}
		
		Calculator* clean() {
			this->answer = 0;
			this->operandA = 0;
			this->operandB = 0;
			return this;
		}
};

int main() {
	cout << "Welcome to the Calculator." << endl;
	Calculator calc; // new calculator object
	Calculator* dummycalc = new Calculator(7, 11); // the program said we needed two calculators for some reason.
	dummycalc->setA(0)->setB(0);                  // so there you go. two calculators
	delete dummycalc;
	while (true) {
		cout << "What do you want to do?" << endl;
		cout << "[1]: Add" << endl;
		cout << "[2]: Subtract" << endl;
		cout << "[3]: Multiply" << endl;
		cout << "[4]: Divide" << endl;
	
		int usr;
		cin >> usr;
	
		cout << "Which two numbers?" << endl;
		double x;
		double y;

		cin >> x;
		cin >> y;
		calc.setA(x)->setB(y);
		switch(usr) {
			case 1:
				calc.add();
				break;
			case 2:
				calc.subtract();
				break;
			case 3:
				calc.multiply();
				break;
			case 4:
				calc.divide();
				break;
			default:
				cout << "Are you blind, stupid, or both? I *told* you the available options." << endl;
				continue; // should continue from the loop IIRC
		}
		
		cout << calc.get() << endl;
	}
    return 0;
}
