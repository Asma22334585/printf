#include "main.h"

/**
 * print_octal - prints octal
 * @ap: input.
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: int.
 */
int print_octal(va_list ap, char *buf, unsigned int ibuf)
{
	int x, i, w, y, f_d;
	char *o, *b;

	x = va_arg(ap, int);
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
	b = malloc(sizeof(char) * (32 + 1));
	b = f_b_r(b, x, w, 32);
	o = malloc(sizeof(char) * (11 + 1));
	o = fill_octal_array(b, o);
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
