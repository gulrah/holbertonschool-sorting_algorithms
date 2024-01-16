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
void bubble_sort(int *array, size_t size)
{
    size_t i, j;
    int temp; /* Temporary variable for swapping */
    int swapped; /* Flag to check if any swaps occurred in the current pass */

    /* Outer loop for each pass through the array */
    for (i = 0; i < size - 1; i++)
    {
        swapped = 0; /* Initialize the swapped flag for each pass */

        /* Inner loop to compare and swap adjacent elements */
        for (j = 0; j < size - 1 - i; j++)
        {
            /* Compare adjacent elements */
            if (array[j] > array[j + 1])
            {
                /* Swap the elements if they are in the wrong order */
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;

                swapped = 1; /* Set the swapped flag to true */

                /* Print the array after each swap */
                print_array(array, size);
            }
        }

        /* If no swaps occurred in the pass, the array is already sorted */
        if (swapped == 0)
            break;
    }
}
