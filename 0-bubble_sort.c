#include "sort.h"

/**
 * bubble_sort - function to sort an array from the lowest to the highest
 *
 * @array: array to sort
 * @size: size of the array
 *
 * Return: Void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp, flag;

	for (j = size, flag = 1; j > 0 && flag; j--)
	{
		flag = 0;
		for(i = 0; (i + 1) < j; i++)
		{
		if (array[i] > array[i + 1])
		{
			tmp = array[i + 1];
			array[i + 1] = array[i];
			array[i] = tmp;
			print_array(array, size);
			flag = 1;
		}
		}
	}
}
