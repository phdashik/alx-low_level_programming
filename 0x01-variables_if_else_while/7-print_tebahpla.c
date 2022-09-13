#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * Description: using the main function
 * program prints the lowercase alphabet in reverse, \n
 * Return: 0
 */
int main(void)
{
	int A;

	for (A = "z" ; A >= "a" ; A--)
	{
		putchar(A);
	}
	putchar("\n");
	return (0);
}
