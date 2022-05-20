# Question 3

## Description

> Implement a function able to calculate and return the average, maximum and minimum value of an array with “n” positions. This function must also return a copy of the input array containing only the even numbers of the original array, as well as the new array size. Implement this logic using the C language and share this code through a public repository on GitHub.

## Comments

> The question asks for a function to receive an array and return several calculations with it, including returning a copy of itself. On the main branch I did as requested. When calling the function, the user passes the addresses that will save the calculations and also the address that will save the copy of the array and its size. The function returns directly to these passed addresses.

## Features

- [x] Return the average of an array
- [x] Return the maximum value of an array
- [x] Return the minimum value of an array
- [x] Return the copy of the input array
- [x] Return the size of the input array copy

## Test program

'''

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

 '''

## Build settings

>- Built with MSYS2 MinGW 64
>- gcc version 11.3.0

## Languages used

>- C

## Authors and contributions

> Márcio Telis Silveira
