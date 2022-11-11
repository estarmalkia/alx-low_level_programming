#include "search_algos.h"

/**
 * print_sub - print the subarray being searched
 * @lo: the least index
 * @hi:he highest index rray: the sub-array to print
 * @array: the array to print
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
 * advanced_bi - recursive advanced search alg
 * @arr: the array to search
 * @hi: the upperbound
 * @lo: the lower bound
 * @va: the value to search
 * @index: the index of the leftmost occurrence of the value
 * Return: the index if found, -1 otherwise
 */
int advanced_bi(int *arr, int hi, int lo, int va, int *index)
{
	int m;
	int idx;

	print_sub(arr, lo, hi);
	if (lo > hi)
		return (-1);
	m = (lo + hi);
	if (m % 2 != 0)
		m = (m - 1) / 2;
	else
		m = m / 2;
	if (arr[m] < va)
		idx = advanced_bi(arr, hi, m + 1, va, index);
	if (arr[m] > va)
		idx = advanced_bi(arr, m - 1, lo, va, index);
	if (arr[m] == va)
	{
		*index = m;
		if (m - 1 > 0 && arr[m - 1] == va)
			advanced_bi(arr, m, lo, va, index);
		if (*index > 0)
			return (*index);
		return (m);
	}
	return (idx);
}

/**
 * advanced_binary - advanced binary search algorithm
 * @array: the array to search
 * @size: the size of the array
 * @value: the value whose index to search
 * Return: the index if found, -1 otherwise
 */
int advanced_binary(int *array, size_t size, int value)
{
	int lo = 0;
	int hi = (int)size - 1;
	int idx = 0;

	if (!array)
		return (-1);
	return (advanced_bi(array, hi, lo, value, &idx));
}
