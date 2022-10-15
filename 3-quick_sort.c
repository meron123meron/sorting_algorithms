#include "sort.h"
/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: is the array
 * @size: is the size of the array
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;
sorting(array, 0, size - 1, size);
}
/**
 * sorting - does recursive sorting
 * @array: the array
 * @low: lowest index
 * @high: highest index
 * @size: size of the array
 * Return: Nothing
 */
void sorting(int *array, int low, int high, size_t size)
{
int pivot;
if (low < high)
{
pivot = lomuto(array, low, high, size);
sorting(array, low, pivot - 1, size);
sorting(array, pivot + 1, high, size);
}
}

/**
 * lomuto - is a partition scheme for the quicksort
 * @array: array
 * @low: lowest index
 * @high: highest index
 * @size: array size
 * Return: pivot index
 */

int lomuto(int *array, int low, int high, size_t size)

{
int i, j, pivot, swap;
pivot = array[high];
i = low;

for (j = low; j < high; j++)
{
if (array[j] < pivot)
{
if (i != j)
{
swap = array[j];
array[j] = array[i];
array[i] = swap;
print_array(array, size);
}
i++;
}
}
if (array[i] != array[high])
{
swap = array[i];
array[i] = array[high];
array[high] = swap;
print_array(array, size);
}
return (i);
}
