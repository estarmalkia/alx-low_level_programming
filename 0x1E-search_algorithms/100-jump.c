#include "search_algos.h"

/**
 * jump_search - the jump search algorithm
 * @array: the array to search
 * @size: the size of the array
 * @value: the value whose index to search
 * Return: index if found -1 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
	int i = 0;
	int st = 0;
	int end = 0;

	if (!array)
		return (-1);
	while (array[end] < value && st < (int)size && end < (int)size)
	{
		if (end < (int)size)
			printf("Value checked array[%d] = [%d]\n",
			       end, array[end]);
		st = end;
		end = end + sqrt((int)size);
	}
	printf("Value found between indexes [%d] and [%d]\n", st, end);
	for (i = st; i <= end; i++)
	{
		if (i < (int)size)
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (i < (int)size && array[i] == value)
			return (i);
	}
	return (-1);
}
