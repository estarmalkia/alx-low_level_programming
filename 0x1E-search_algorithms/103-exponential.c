#include "search_algos.h"
/**
 * print_sub - print the subarray being searched
 * @lo: the least index
 * @hi: the highest index
 * @array: the sub-array to print
 */
void print_sub(int *array, int lo, int hi)
{
	int i;

	if (lo <= hi)
		printf("Searching in array: ");
	for (i = lo; i <= hi; i++)
	{
		printf("%d", array[i]);
		if (i != hi)
			printf(", ");
		else if (i == hi)
			printf("\n");
	}
}


/**
 * exponential_search - exponential search algorithm
 * @array: the array to search
 * @size: the size of the array
 * @value: the value whose index to search
 * Return: the index if found, -1 otherwise
 */

int exponential_search(int *array, size_t size, int value)
{
	int b = 1;
	int lo;
	int hi;
	int m;

	if (!array)
		return (-1);
	while (b < (int)size && array[b] < value)
	{
		printf("Value checked array[%d] = [%d]\n", b, array[b]);
		b *= 2;
	}
	lo = b / 2;
	if (b > (int)size - 1)
		b = size - 1;
	printf("Value found between indexes [%d] and [%d]\n", lo, b);
	hi = b;
	m = 0;
	print_sub(array, lo, hi);
	while (lo <= hi)
	{
		m = (lo + hi);
		if (m % 2 != 0)
			m = (m - 1) / 2;
		else
			m = m / 2;
		if (array[m] < value)
			lo = m + 1;
		else if (array[m] > value)
			hi = m - 1;
		else
			return (m);
		print_sub(array, lo, hi);
	}
	return (-1);
}
