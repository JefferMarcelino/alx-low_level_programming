/**
 * int_index - function that searches for an integer
 *
 * @array: the array
 * @size: the size of the array
 * @cmp: the function that will compare values
 *
 * Return: the index of the first occurence of a value, otherwise -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size > 0 && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
