#include "search_algos.h"
/**
 * binary_search - Function for search an value in sort array.
 * @array: Pointer first item of array.
 * @size: Size of array.
 * @value: Value to searched in array.
 * Return: cnt in case of success or -1 if not found value.
 */
int binary_search(int *array, size_t size, int value)
{
    int *tmp = NULL;
    int first = 0, last = size, middle = 0, aux = 0, cnt = 0;

    if (!array)
        return (-1);
    
    tmp = array;

    while(first <= last)
    {
        if (aux == 0)
        {
            printf("Searching in array: ");
            for (cnt = 0; cnt <= last; cnt += 1)
            {
                if (cnt != last)
                    printf("%d, ", cnt);
                else
                    printf("%d", cnt);
            }
            printf("\n");
            aux += 1;
        }
        else
        {
            printf("Searching in array: ");
            for (cnt = middle; cnt <= last; cnt += 1)
            {
                if (cnt != last)
                    printf("%d, ", cnt);
                else
                    printf("%d", cnt);
            }
            printf("\n");
            aux += 1;
        }
        
        middle = first + (last - first) / 2;
        if (tmp[middle] == value)
            return (middle);
        if (tmp[middle] > value)
        {
            last = middle - 1;
        }
        if (tmp[middle] < value)
        {
            first = middle + 1;
        }
    }
    return (-1);
}
