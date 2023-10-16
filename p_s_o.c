#include "main.h"

/**
 * printldoct - prints long decimal number in o
 * @ap: input number
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed.
 */
int printldoct(va_list ap, char *buf, unsigned int ibuf)
{
	short int x, i, w, y, f_d;
	char *o, *b;

	x = va_arg(ap, int);
	w = 0;
	if (x == 0)
	{
		ibuf = handl_buf(buf, '0', ibuf);
		return (1);
	}
	if (x < 0)
	{
		x = (x * -1) - 1;
		w = 1;
	}

	b = malloc(sizeof(char) * (16 + 1));
	b = f_b_r(b, x, w, 16);
	o = malloc(sizeof(char) * (6 + 1));
	o = f_s_o_a(b, o);
	for (f_d = i = y = 0; o[i]; i++)
	{
		if (o[i] != '0' && f_d == 0)
			f_d = 1;
		if (f_d)
		{
			ibuf = handl_buf(buf, o[i], ibuf);
			y++;
		}
	}
	free(b);
	free(o);
	return (y);
}
