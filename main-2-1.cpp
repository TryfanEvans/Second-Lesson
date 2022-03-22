#include <iostream>

extern void print_sevens(int *nums, int length);

int main()
{
    double first[3] = {2, 43, 4};

    double second[3];
    cpyda(first, second, 3);
    for (int i = 0; i < 3; i++)
    {
        //     std::cout << second[i] << std::endl;
    }
    return 0;
}