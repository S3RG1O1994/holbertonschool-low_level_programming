#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - execute function in anyone elements array.
 * @array: array of integree.
 * @size: lenght of array.
 * @action: pointer to array.
 *
 * Return: pointer.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t  cnt;

	for (cnt = 0; cnt < size; cnt++)
	{
		action(array[cnt]);
	}
}
