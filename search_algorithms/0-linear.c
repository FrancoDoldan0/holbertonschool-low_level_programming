#include "search_algos.h"

/**
* linear_search - function that searches for a value in an array of integers
*@array: array to be search
*@size: the size of the array
*@value: searched value
*Return: If value is not present in array or if array is NULL
*the function must return -1
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
	{
		return (-1);
	}

	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}
		i++;
	}

	return (-1);
}
