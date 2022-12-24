#include <stdio.h>

/**
 * main - program that prints the numbers from 1 to 100, followed by a new
 * line. But for multiples of three print Fizz instead of the number and for
 * the multiples of five print Buzz. For numbers which are multiples of both
 * three and five print FizzBuzz.
 *
 * Return: always 0 (sucess)
 */

int main(void)
{
	int n;

	for (n = 1; n < 101; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else if (n % 5 == 0)
			printf("Buzz");
		else
			printf("%d", n);

		if (n != 100)
			printf(" ");
	}

	printf("\n");

	return (0);
}
