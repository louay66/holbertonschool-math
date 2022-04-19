#include "holberton.h"
/**
 *conjugate- conjugate of complex number
 *@c:struct
 * Return: struct
 */
complex conjugate(complex c)
{
	c.im = c.im * -1;

	return (c);
}
