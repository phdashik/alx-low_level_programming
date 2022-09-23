#include "main.h"

/**
 * * print_number - print an intejer
 * @n:integer tp thr printed
 * 
 */
void prlint_number(int n)
{	
	unsigned int num = n;

	if  (n<0)
	{	
	 _putcahar('-');
	 num = -num
	 }

	if ((num / 10) >0)
		print_number(num /10};

	_putchar((num % 10) + '0');
}
