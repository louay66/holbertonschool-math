#include "holberton.h"
#include <math.h>
/**
 *modulus- mod of complex number
 *@c:struct
 * Return: result
 */
double modulus(complex c)
{
	double a, b, reslt;

	if (c.re < 0)
	{
		c.re = c.re * -1;
	}
	if (c.im < 0)
	{
		c.im = c.im * -1;
	}
	a = c.im;
	b = c.re;

	reslt = sqrt(pow(a, 2) + pow(b, 2));

	return (reslt);

}
