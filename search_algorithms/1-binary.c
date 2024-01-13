#include "search_algos.h"

/**
 * print_array - Prints all elements of an array.
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array
 * Return: Nothing.
 */
void print_array(int *array, int size)
{
	int i;

	printf("Searching in array: ");
	for (i = 0; i < size - 1; i++)
	{
		printf("%i, ", array[i]);
	}

	if (size > 0)
	{
		printf("%i\n", array[size - 1]);
	}
	else
	{
		printf("Empty array\n");
	}
}

/**
 * binary_search - Search for a value in a sorted array.
 * @array: The sorted array to search in.
 * @size: The size of the array.
 * @value: The value to search for.
 *
 * Return: If value is not present in array or if array is NULL,
 *  function must return -1
 */
int binary_search(int *array, size_t size, int value)
{
	int mid, low, high;

	if (!array)
	{
		return (-1);
	}

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		print_array(&array[low], high - low + 1);

		mid = (low + high) / 2;
		if (array[mid] == value)
			return (mid);
		else if (value > array[mid])
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}

	return (-1);
}

