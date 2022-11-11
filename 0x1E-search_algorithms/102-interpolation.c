#include "search_algos.h"

/**
 * interpolation_search - interpolation search algorithm
 * @arr: the array to search
 * @size: the size of the array
 * @va: the value whose index to search
 * Return: the index if found, -1 otherwise
 */
int interpolation_search(int *arr, size_t size, int va)
{
	int hi = (int)size - 1;
	int lo = 0;
	int pos;

	if (!arr)
		return (-1);
	pos = lo + (((double)(hi - lo) / (arr[hi] - arr[lo])) *
		    (va - arr[lo]));
	if (pos > (int)size - 1)
		printf("Value checked array[%d] is out of range\n", pos);
	while (arr[hi] != arr[lo] && va <= arr[hi] && va >= arr[lo])
	{
		pos = lo + (((double)(hi - lo) / (arr[hi] - arr[lo])) *
			    (va - arr[lo]));
		printf("Value checked array[%d] = [%d]\n",
		       pos, arr[pos]);
		if (arr[pos] < va)
			lo = pos + 1;
		else if (arr[pos] > va)
			hi = pos - 1;
		else
			return (pos);
	}
	if (va == arr[lo])
	{
		printf("Value checked array[%d] = [%d]\n", lo, arr[lo]);
		return (lo);
	}
	else
		return (-1);
}
