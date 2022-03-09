#include <iostream>

int main()
{
    int base10;
    std::cin >> base10;
    std::string base2;
    while (base10 > 0)
    {
        int remainder = base10 % 2;
        base10 = base10 - remainder;
        base10 = base10 / 2;
        base2 = std::to_string(remainder) + base2;
    }
    std::cout << base2 << std::endl;

    return 0;
}