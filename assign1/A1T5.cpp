#include <iostream>

int main()
{
    int n;
     std::cout <<"Enter number: ";
     std::cin >> n;

    for(int i = 2; i < n; i += 1)
    {
        while(n % i == 0)
        {
            n = n / i;
            std::cout << i << std::endl;
        }
    {
     if(n != 1)
    {
        std::cout << n << std::endl;
    } else if (n == 1)
    {
        std::cout << n << std::endl;
    }

    return 0;
}

