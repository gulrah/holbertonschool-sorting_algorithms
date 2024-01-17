#include <stdio.h>
#include "sort.h"

/* 
 * Function: bubble_sort
 * ---------------------
 * Sorts an array of integers in ascending order using Bubble Sort
 *
 * array: The array to be sorted
 * size: The size of the array
 */
void bubble_sort(int *array, size_t size) {
    size_t pass = 0; /* Indicates how many passes have been made */
    size_t unsorted_index = 0; /* Index for iterating through the unsorted part of the array */

    /* Keep looping until the entire array is sorted */
    while (pass < size - 1) {
        int swapped = 0; /* Flag to check if we made any swaps in this pass */
        unsorted_index = 0; /* Start from the beginning of the unsorted part */

        /* Go through the array and compare adjacent elements in the unsorted part */
        while (unsorted_index < size - 1 - pass) {
            /* If the current element is greater than the next one, swap them */
            if (array[unsorted_index] > array[unsorted_index + 1]) {
                int temp = array[unsorted_index];
                array[unsorted_index] = array[unsorted_index + 1];
                array[unsorted_index + 1] = temp;

                swapped = 1; /* Indicate that we made a swap */

                /* Print the array after each swap */
                print_array(array, size);
            }

            unsorted_index++; /* Move to the next element in the unsorted part */
        }

        /* If we didn't make any swaps, the array is already sorted */
        if (swapped == 0)
            break;

        pass++; /* Move to the next pass */
    }
}
