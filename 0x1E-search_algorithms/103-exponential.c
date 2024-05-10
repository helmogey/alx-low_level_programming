#include "search_algos.h"

/**
 * exponential_search - searches for a value
 * @array: array
 * @size: size_t
 * @value: int
 * Return: Always EXIT_SUCCESS
 */

int exponential_search(int *array, size_t size, int value)
{
int i = 1, low, high, mid;


if (array == NULL) {
return (-1);
}


while (i < size && i <= size / 2)
{
i *= 2;
}

if (i <= 1)
{
i = size;
}
else
{
i /= 2;
}

while (i > 0)
{
if (array[i - 1] <= value) {
printf("Searching subarray: [");
for (int j = i - 1; j < size && j < i + 1; j++) {
printf("%d, ", array[j]);
}
printf("]\n");

low = i - 1;
high = size - 1;
while (low <= high)
{
mid = low + (high - low) / 2;
printf("Comparing: %d\n", array[mid]);

if (array[mid] == value) {
return (mid);
}
else if (array[mid] < value)
{
low = mid + 1;
}
else
{
high = mid - 1;
}
}
break;
}
i /= 2;
}

return (-1);
}