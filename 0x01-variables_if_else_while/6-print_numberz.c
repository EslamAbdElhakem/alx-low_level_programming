/* headers */
#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all single digit numbers of base 10 starting from 0
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		/*convert digit to ASCII */
		putchar(num + '0');
		++num;
	}
	putchar('\n');
	return (0);
}
