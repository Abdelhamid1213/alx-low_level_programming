#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 *
 * @nmemb: number of elements of array
 * @size: size of each element
 *
 * Return: pointer or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
    unsigned int i;
    char *array;

    if (nmemb == 0 || size == 0)
        return (NULL);

    array = malloc(nmemb * size);
    if (array == NULL)
        return (NULL);

    for (i = 0; i < nmemb * size; i++)
        array[i] = 0;
    return (array);
}
