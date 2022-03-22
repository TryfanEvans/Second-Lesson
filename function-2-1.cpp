void cpyda(double *old_array, double *new_array, int length)
{
    double *old_ptr = old_array;
    double *new_ptr = new_array;
    for (int i = 0; i < length; i++)
    {
        *new_ptr = *old_ptr;
        old_ptr++;
        new_ptr++;
    }
}