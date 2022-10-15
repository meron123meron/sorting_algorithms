#include "sort.h"
/**
 * selection_sort - sorts an array of integers in
 * ascending order using the Selection sort algorithm
 * @array: is the array
 * @size: size of the array
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
size_t i, j, c;
int min, swap;
if (array == NULL || size < 2)
return;

for (i = 0; i < size; i++)
{
min = array[i];
for (j = i + 1; j < size; j++)
{
if (min > array[j])
{
min = array[j];
c = j;
}
}
if (min != array[i])
{
swap = array[i];
array[i] = min;
array[c] = swap;
print_array(array, size);
}
}
}
