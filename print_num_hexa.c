#include "main.h"

/**
 * printnumhex - print number in hex begining with zero
 * @ap: input.
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: int
 */
int printnumhex(va_list ap, char *buf, unsigned int ibuf)
{
	int x, i, w, y, f_d;
	char *hex, *b;

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
	ibuf = handl_buffer(buf, 'x', ibuf);
	b = malloc(sizeof(char) * (32 + 1));
	b = f_b_r(b, x, w, 32);
	hex = malloc(sizeof(char) * (8 + 1));
	hex = f_h_r(b, hex, 0, 8);
	for (f_d = i = y = 0; hex[i]; i++)
	{
		if (hex[i] != '0' && f_d == 0)
			f_d = 1;
		if (f_d)
		{
			ibuf = handl_buffer(buf, hex[i], ibuf);
			y++;
		}
	}
	free(b);
	free(hex);
	return (y + 2);
}
