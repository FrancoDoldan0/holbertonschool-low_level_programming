#include "search_algos.h"

/**
 * print_array - Prints all elements of an array.
 * @array: Array to be printed.
 * @size: Size of the array.
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
 * binary_search - Search for a value in a sorted array using binary search.
 * @array: The sorted array to search in.
 * @size: The size of the array.
 * @value: The value to search for.
 *
 * Return: 1 if the value is found, 0 otherwise or if the array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
	int middle, low, high;

	if (array == NULL)
	{
		return (-1);
	}

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		print_array(&array[low], high - low + 1);

		middle = (low + high) / 2;
		if (array[middle] == value)
			return (middle);
		else if (value > array[middle])
		{
			low = middle + 1;
		}
		else
		{
			high = middle - 1;
		}
	}

	return (-1);
}

