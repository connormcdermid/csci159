#include <iostream>
int main() {

    int num;

    std::cout << " Enter a number :";
    std::cin >> num;

    while ( num != 1 ){
        if ( num % 2 == 1)
            num = (3 * num) + 1;
        else
            num = num/2;

    std::cout << num << " ";
    }


    return 0;
}
