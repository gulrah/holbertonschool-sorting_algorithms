#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using Bubble Sort
 * @array: The array to be sorted
 * @size: The size of the array
 */
void bubble_sort(int *array, size_t size)
{
    size_t i, j;
    int swapped;

    i = 0;
    while (i < size - 1)
    {
        swapped = 0;
        j = 0;
        while (j < size - i - 1)
        {
            if (array[j] > array[j + 1])
            {
                /* Swap elements if they are in the wrong order */
                swap(&array[j], &array[j + 1]);
                /* Print array after each swap */
                print_array(array, size);
                swapped = 1;
            }
            j++;
        }
        /* If no two elements were swapped by inner loop, the array is sorted */
        if (swapped == 0)
            break;
        i++;
    }
}

/**
 * swap - Swaps the values of two integers
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 */
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
