#include "main.h"

/**
 * printnumocta - print to start with zero.
 * @ap: int.
 * @buf: buffer pointer.
 * @ibuf: index for buffer pointer.
 * Return: int.
 */
int printnumocta(va_list ap, char *buf, unsigned int ibuf)
{
	int x, i, w, y, f_d;
	char *o, *bnr;

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
	ibuf = handl_buffer(buf, '0', ibuf);
	bnr = malloc(sizeof(char) * (32 + 1));
	bnr = f_b_r(bnr, x, w, 32);
	o = malloc(sizeof(char) * (11 + 1));
	o = fill_octal_array(bnr, o);
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
	free(bnr);
	free(o);
	return (y + 1);
}
