#include <iostream>

void print_summed_matrices(int array1[3][3], int array2[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        std::cout << array1[i][0] + array2[i][0] << " " << array1[i][1] + array2[i][1] << " " << array1[i][2] + array2[i][2] << " " << std::endl;
    }
}