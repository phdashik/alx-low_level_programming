#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Description: using the main function
 * this program prints all single digit numbers of base 10 >= 0, \n
 * Return: 0
 */
int main(void)
{
	int d;

	for (n = '0' ; n <= '9' ; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
