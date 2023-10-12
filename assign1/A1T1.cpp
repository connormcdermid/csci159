#include <iostream>

using namespace std;
int main() {

    int num;
    int digit;
    int sum = 0;

    cout <<"Enter a number: " << endl;
    cin >> num;

    while (num > 0) {
        digit=num%10;
        sum=sum+digit;
        num=num/10;
    }

    if (sum > 10) {
        cout << "Invalid " << endl;
    }
    else {
        cout << "The sum is: " << sum << endl;
    }

    return 0;

}
