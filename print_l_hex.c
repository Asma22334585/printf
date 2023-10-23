#include "main.h"

/**
 * printlhex - decimal in hex
 * @ap: input
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: int
 */

int printlhex(va_list ap, char *buf, unsigned int ibuf)
{
	long int x, i, w, y, f_d;
	char *hex, *bnr;

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

	bnr = malloc(sizeof(char) * (64 + 1));
	bnr = f_b_r(bnr, x, w, 64);
	hex = malloc(sizeof(char) * (16 + 1));
	hex = f_h_r(bnr, hex, 0, 16);
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
	free(bnr);
	free(hex);
	return (y);
}
