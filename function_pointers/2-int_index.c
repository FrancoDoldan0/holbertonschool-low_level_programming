#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @array: array
 * @cmp: pointer to the funtion
 * @size: numer elements
 *
 * Return: the index of the first element for which the cmp
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0, inx;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	while (a < size)
	{
		a++;
		inx = cmp(array[a]);
		/*stores the comparision result inside the function 'cmp'*/

		if (inx != 0)
		{
			return (a);
		}
	}
	return (-1);
}
