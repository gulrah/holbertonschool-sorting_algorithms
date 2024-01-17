#include <stdio.h>
#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order using
 * the Selection sort algorithm.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void selection_sort(int *array, size_t size) {
    size_t current_position, unsorted_index, min_index;

    /* Check if the array is NULL or has less than 2 elements */
    if (array == NULL || size < 2)
        return;

    /* Iterate through the array */
    for (current_position = 0; current_position < size - 1; current_position++) {
        min_index = current_position;

        /* Find the index of the minimum element in the unsorted part of the array */
        for (unsorted_index = current_position + 1; unsorted_index < size; unsorted_index++) {
            if (array[unsorted_index] < array[min_index])
                min_index = unsorted_index;
        }

        /* If the minimum element is not at the current position, swap them */
        if (min_index != current_position) {
            /* Swap elements */
            int temp = array[current_position];
            array[current_position] = array[min_index];
            array[min_index] = temp;

            /* Print the array after each swap */
            print_array(array, size);
        }
    }
}
