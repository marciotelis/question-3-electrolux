#include <stdio.h>

void array_statistics(int input_array[], int input_array_size, int* average, int* maximum, int* minimum);

int main (void) {
    int array_test[] = {10, 20, 30, 80};
    int array_average = 0;
    int array_maximum = 0;
    int array_minimum = 0;

    array_statistics(array_test, sizeof(array_test), &array_average, &array_maximum, &array_minimum);

    printf("\naverage: %d", array_average);
    printf("\nmaximum: %d", array_maximum);
    printf("\nminimum: %d", array_minimum);

    }

void array_statistics(int input_array[], int input_array_size, int* average, int* maximum, int* minimum) {
    int array_sum = 0;
    *average = 0;
    *maximum = 0;
    *minimum = 0;

    for(int i = 0; i < (input_array_size/sizeof(int)); i++) {
        array_sum += input_array[i];
        if (i > 0) {
            if(input_array[i] > *maximum) {
                *maximum = input_array[i];
            } else {
                if (input_array[i] < *minimum){
                    *minimum = input_array[i];
                }
            }
        } else {
            *maximum = input_array[0];
            *minimum = input_array[0];
        }
    }

    *average = array_sum / (input_array_size/sizeof(int));
}