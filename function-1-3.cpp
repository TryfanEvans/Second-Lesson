#include <iostream>

void cpyia(int old_array[], int new_array[], int length)
{
    int *new_ptr;
    int *old_ptr;
    old_ptr = old_array;
    new_ptr = new_array;
    for (int j = 0; j < length; j++)
    {
        *new_ptr = *old_ptr;
        old_ptr++;
        new_ptr++;
    }
}