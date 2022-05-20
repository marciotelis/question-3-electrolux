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

~~~c

#include <stdio.h>
#include <stdlib.h>
#include "array_handler.h"

int main(void)
{

    /*  Input array */
    int array_test[] = {10, 20, 30, 80};
    /*  defines variables that returns will be allocated */
    int array_average = 0;
    int array_maximum = 0;
    int array_minimum = 0;
    int array_copy_size = 0;
    /*  Defines where the copy of the array will be saved, allocating an initial memory size    */
    int *array_copy = malloc(10 * sizeof(int));
    
    /*  Call the function:
        void array_statistics(int input_array[], int input_array_size, int *average, int *maximum, int *minimum, int array_return[], int *array_copy_size_return);

        the arguments are:
        input array;
        size of input array;
        the storage address of the value of average array return;
        the storage address of the value of maximum value array return;
        the storage address of the value of minimum value array return;
        the storage address of the copy array return;
        the storage address of copy array size return;
    */
    array_statistics(array_test, (sizeof(array_test) / sizeof(int)), &array_average, &array_maximum, &array_minimum, array_copy, &array_copy_size);

    /*  Print the values to make sure it's correct  */
    printf("\naverage: %d", array_average);
    printf("\nmaximum: %d", array_maximum);
    printf("\nminimum: %d", array_minimum);
    printf("\narray size: %d", array_copy_size);

    for (int k = 0; k < array_copy_size; k++)
    {
        printf("\narray_copy[%d] = %d", k, array_copy[k]);
    }
}

~~~

## Build settings

>- Built with MSYS2 MinGW 64
>- gcc version 11.3.0

## Languages used

>- C

## Authors and contributions

> Márcio Telis Silveira
