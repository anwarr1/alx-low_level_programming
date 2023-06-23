#include "main.h"

/**
 * print_triangle -  a function that prints a triangle, followed by a new line.
 * @size: An input integer
 * Return: Always 0
 */
void print_triangle(int size)
{
	int i = size - 1, j, n = size - 1;

	if (size > 0)
	{
		for (; i <= 0; i--)
		{
			for (j = i; j >= 0; j--)
			{
					_putchar('#');
			}
			
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
