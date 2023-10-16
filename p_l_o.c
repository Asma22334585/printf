#include "main.h"
/**
 * print_long_oct - prints long octal
 * @ap: input.
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: int.
 */
int print_long_oct(va_list ap, char *buf, unsigned int ibuf)
{
	long int x, i, w, y, f_d;
	char *o, *b;

	x = va_arg(ap, long int);
	w = 0;
	if (x == 0)
	{
		ibuf = handl_buffer(buf, '0', ibuf);
		return (1);
	}
	if (x < 0)
	{
		x = (x * -1) - 1;
		w = 1;
	}

	b = malloc(sizeof(char) * (64 + 1));
	b = f_b_r(b, x, w, 64);
	o = malloc(sizeof(char) * (22 + 1));
	o = f_l_o_a(b, o);
	for (f_d = i = y = 0; o[i]; i++)
	{
		if (o[i] != '0' && f_d == 0)
			f_d = 1;
		if (f_d)
		{
			ibuf = handl_buffer(buf, o[i], ibuf);
			y++;
		}
	}
	free(b);
	free(o);
	return (y);
}
