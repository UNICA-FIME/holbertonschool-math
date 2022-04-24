#ifndef _HOLBERTON_
#define _HOLBERTON_
#include <stdio.h>
/**
 * struct Complex - displays the complex numbers
 * @re: real number
 * @im: imaginary number
 */

typedef struct Complex
{
	double re;
	double im;
} complex;
void display_complex_number(complex c);
#endif
