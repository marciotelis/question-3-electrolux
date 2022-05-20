#include <stdio.h>
#include <stdlib.h>

void array_statistics(int input_array[], int input_array_size, int *average, int *maximum, int *minimum, int array_return[], int *array_copy_size_return);

int main(void)
{
    int array_test[] = {10, 20, 30, 80};
    int array_average = 0;
    int array_maximum = 0;
    int array_minimum = 0;
    int *array_copy = malloc(10 * sizeof(int));
    int array_copy_size = 0;

    array_statistics(array_test, (sizeof(array_test) / sizeof(int)), &array_average, &array_maximum, &array_minimum, array_copy, &array_copy_size);

    printf("\naverage: %d", array_average);
    printf("\nmaximum: %d", array_maximum);
    printf("\nminimum: %d", array_minimum);
    printf("\narray size: %d", array_copy_size);

    for (int k = 0; k < array_copy_size; k++)
    {
        printf("\narray_copy[%d] = %d", k, array_copy[k]);
    }
}

void array_statistics(int input_array[], int input_array_size, int *average, int *maximum, int *minimum, int array_return[], int *array_copy_size_return)
{
    int array_sum = 0;
    *average = 0;
    *maximum = 0;
    *minimum = 0;
    *array_copy_size_return = input_array_size;

    array_return = realloc(array_return, (input_array_size * sizeof(int)));

    for (int j = 0; j < input_array_size; j++)
    {
        array_return[j] = input_array[j];
    }

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

    *average = array_sum / input_array_size;
}