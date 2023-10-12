#include <math.h>
#include <iostream>

using namespace std;

int main() {

int num;
int squareroot;

cout << "Please Enter Number: ";
cin >> num;

squareroot = sqrt(num);

if(squareroot * squareroot == num) {
    cout << num <<" is Square Number" << endl;
} else {
    cout << num << " is not a Square Number" << endl;
}
    return 0;
}
