#include <iostream>

extern void print_scaled_matrix(int array[3][3], int scale);

int main()
{
    //taken from example
    int scale = 3;
    int threebythree[3][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}};
    print_scaled_matrix(threebythree, scale);

    return 0;
}