#include <iostream>

extern void count_numbers(int array[4][4]);

void generatearray(int array[4][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            array[i][j] = rand() % 9;
            // std::cout << i << "   " << j << "   " << array[i][j] << std::endl;
        }
    }
}

int main()
{
    int randomarray[4][4];
    // for (int i = 0; i < 100; i++)
    {
        generatearray(randomarray);
        count_numbers(randomarray);
    }
    return 0;
}