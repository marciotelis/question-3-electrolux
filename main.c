#include <stdio.h>

void array_statistics(int input_array[], int input_array_size, int* average);

int main (void){
    int array_test[] = {10, 20, 30, 40};
    int array_average;

    array_statistics(array_test, sizeof(array_test), &array_average);

    }

void array_statistics(int input_array[], int input_array_size, int* average){
    int array_sum = 0;

    for(int i = 0; i < (input_array_size/sizeof(int)); i++){
        array_sum += input_array[i];
    }

    *average = array_sum / (input_array_size/sizeof(int));
}