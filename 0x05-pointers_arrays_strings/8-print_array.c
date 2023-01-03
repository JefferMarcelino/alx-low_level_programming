#include <stdio.h>
#include "main.h"

void print_array(int *a, int n)
{
	for (i = 0; i < n; i++)
	{
		if (i + 1 == n)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i])
	}
	_putchar(10);
}
