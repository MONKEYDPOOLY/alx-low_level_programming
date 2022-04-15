#include "main.h"
/**
 * print_numbers - print the numbers from zero to nine
 *
 * Return: 0-9 followed by a newline
 */
void print_numbers(void)
{
int i;

for (i = 0; i <= 9; i++)
_putchar(i + '0');
_putchar ("\n");
}

