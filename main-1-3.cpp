#include <iostream>

extern void cpyia(int old_array[], int new_array[], int length);

int main()
{
    int first[3] = {1, 2, 4};
    int second[3];
    cpyia(first, second, 3);

    return 0;
}