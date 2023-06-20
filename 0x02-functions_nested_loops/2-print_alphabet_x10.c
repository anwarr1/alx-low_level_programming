#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int round = 0;
	char letter = 'a';

	while (letter < 'z')
	{
		round = '0';
		while (round <= 9)
		{
			_putchar(letter);
			round++;
		}
		_putchar('\n');

		letter++;
	}
}
