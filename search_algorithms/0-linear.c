#include "search_algos.h"

/**
* linear_search - function that searches for a value in an array of integers
*@array: array to search
*@size: size of the array
*@value: searched value
*Return: -1 if the array is null or a value is not found
*/

int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (!array)
	{
		return (-1);
	}

	while (index < size)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);

		if (array[index] == value)
		{
			return (index);
		}
		index++;
	}

	return (-1);
}
