#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: the array to be sorted
 * @size: size of the array
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
size_t i, n;
int switchs;
if (size < 2)
return;

n = 0;
while (n < size)
{
for (i = 0; i < size - 1; i++)
{
if (array[i] > array[i + 1])
{
switchs = array[i];
array[i] = array[i + 1];
array[i + 1] = switchs;
print_array(array, size);
}
}
n++;
}
}
