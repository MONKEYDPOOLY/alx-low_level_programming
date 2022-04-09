#include <stdio.h>


/**
 *
 * main - entry point
 *
 * Description: Print numbers 0 to 9 on line
 * Return: Always 0 (success/correct)
 */
int main(void)
{
char i;

for (i = '0' ; i <= '9'; ++i)
putchar(i);

printf("\n");

return (0);
}
