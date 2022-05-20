#include <stdio.h>
#include <stdlib.h>

void array_statistics(int input_array[], int input_array_size, int *average, int *maximum, int *minimum, int array_return[], int *array_copy_size_return)
{
    /*  Reset all pointers  */
    int array_sum = 0;
    *average = 0;
    *maximum = 0;
    *minimum = 0;

    /*  Set the value of array copy size    */
    *array_copy_size_return = input_array_size;

    /*  reallocates array memory to the same size as the array to be copied */
    array_return = realloc(array_return, (input_array_size * sizeof(int)));

    /*  Copy input array values to array copy   */
    for (int j = 0; j < input_array_size; j++)
    {
        array_return[j] = input_array[j];
    }

    /*  Check which are the largest and smallest elements   */
    for (int i = 0; i < input_array_size; i++)
    {
        array_sum += input_array[i];
        if (i > 0)
        {
            if (input_array[i] > *maximum)
            {
                *maximum = input_array[i];
            }
            else
            {
                if (input_array[i] < *minimum)
                {
                    *minimum = input_array[i];
                }
            }
        }
        else
        {
            *maximum = input_array[0];
            *minimum = input_array[0];
        }
    }

    /*  Calculates the average of array values  */
    *average = array_sum / input_array_size;
}