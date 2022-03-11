#include <iostream>

void count_numbers(int array[4][4])
{
    int tally[10];
    for (int i = 0; i < 10; i++)
    {
        tally[i] = 0;
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            tally[array[i][j]] = tally[array[i][j]] + 1;
        }
    }
    std::string output;
    for (int i = 0; i < 10; i++)
    {
        output = output + std::to_string(i) + ":" + std::to_string(tally[i]) + ";";
    }
    std::cout << output << std::endl;
}