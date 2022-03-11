#include <iostream>

void print_scaled_matrix(int array[3][3], int scale)
{
    for (int i = 0; i < 3; i++)
    {
        std::cout << array[i][0] * scale << " " << array[i][1] << " " << array[i][2] << std::endl;
    }
}