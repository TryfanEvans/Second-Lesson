#include <iostream>

extern void copy_2d_strings(std::string first[][2], std::string second[][2], int n);

int main()
{
    std::string first[3][2] = {"df", "bb", "ac"};
    std::string second[3][2];
    copy_2d_strings(first, second, 2);
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            //         std::cout << second[i][j] << std::endl;
        }
    }
    return 0;
}