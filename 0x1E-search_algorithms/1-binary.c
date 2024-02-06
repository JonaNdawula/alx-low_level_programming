#include "search_algos.h"

/**
 *binary_search - function that searches for a value in a sorted
 *array of integers using the Binary search algorithm
 *
 *@array: points to very first element of array to search in
 *@size: the number of elements in the array
 *@value: value to be searched for
 *
 *Return: index where value is found
 */
int binary_search(int *array, size_t size, int value)
{

	return (bin_search_for_index(array, 0, size - 1, value));

}

/**
 * bin_search_for_index - a recursive function for binary_search
 *@array: points to first element of the array to be searched
 *@left: left index of array
 *@right: right index of array
 *@value: value to be searched for
 *
 *Return: index where we get value
 */
int bin_search_for_index(int *array, size_t left, size_t right, int value)
{
	int middle;

	if (array == NULL || left > right)
	{
		return (-1);
	}
	display_array(array, left, right);

	middle = left + (right - left) / 2;

	if (left == right)
		return (*(array + middle) == value ? (int)middle : -1);
	if (array[middle] == value)
		return (middle);
	else if (array[middle] > value)
		return (bin_search_for_index(array, left, middle - 1, value));
	else
		return (bin_search_for_index(array, middle + 1, right, value));
}

/**
 *display_array - displays an array of integers
 *@array: The array to be displayed
 *@left: left index of the array
 *@right: right index of the array
 *
 */
void display_array(int *array, size_t left, size_t right)
{

	size_t x = left;

	if (array)
	{

		printf("Searching in array: ");

		while (x <= right)
		{

			printf("%d%s", *(array + x), x < right ? ", " : "\n");
			x++;
		}
	}
}
