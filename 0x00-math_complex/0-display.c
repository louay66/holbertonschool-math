#include "holberton.h"
/**
 *display_complex_number - display comple _number
 *@c:struct
 * Return: void
 */
void display_complex_number(complex c)
{
	if (c.im == 0)
	{
		printf("%d\n", c.re);
	}
	else if (c.im > 0)
	{
		if (c.im == 1)
			printf("%d + i\n", c.re);
		else
		printf("%d + %di\n", c.re, c.im);
	}
	else
			printf("%d + i\n", c.re);
		else
		printf("%d - %di\n", c.re, (c.im * -1));
}
