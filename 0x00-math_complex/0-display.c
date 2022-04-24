#include "holberton.h"
/**
 * display_complex_number - displays the complex numbers.
 *
 * @c: struct complex
 */
void display_complex_number(complex c)
{
	printf("%.0f ", c.re);
	if (c.im != 0)
	{
		printf("+ %.0fi", c.im);
	}
	printf("\n");
}
