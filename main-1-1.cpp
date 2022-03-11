#include <iostream>

extern int diagonal(int array[4][4]);

int main()
{
    int array[4][4] = {{1, 4, 5, 2}, {2, 4, 3, 5}, {3, 5, 5, 3}, {1, 4, 2, 6}};
    std::cout << diagonal(array) << std::endl;
    return 0;
}