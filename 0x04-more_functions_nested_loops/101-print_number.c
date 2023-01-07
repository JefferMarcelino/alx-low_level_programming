#include "main.h"

void print_number(int n)
{
	if (n > 9)
		_putchar();
	_putchar((n % 10) + 48);
	_putchar(10);
}
