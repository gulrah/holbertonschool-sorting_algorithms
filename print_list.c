#include "sort.h"
#include <stdio.h>

/**
 * print_list - Prints a list of integers
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int is_first_element = 1;  /* To track if it's the first element in the list */

    while (list != NULL)
    {
        if (!is_first_element)
            printf(", ");  /* Print a comma and space between elements after the first one */
        printf("%d", list->n);  /* Print the current element */

        is_first_element = 0;  /* Mark that the first element has been printed */
        list = list->next;  /* Move to the next element in the list */
    }

    printf("\n");  /* Print a newline after printing the entire list */
}
