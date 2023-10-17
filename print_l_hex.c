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
	long int x, i, w, y, f_dt;
	char *hex, *b;

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
	hex = malloc(sizeof(char) * (16 + 1));
	hex = f_h_r(b, hex, 0, 16);
	for (f_dt = i = y = 0; hex[i]; i++)
	{
		if (hex[i] != '0' && f_dt == 0)
			f_dt = 1;
		if (f_dt)
		{
			ibuf = handl_buffer(buf, hex[i], ibuf);
			y++;
		}
	}
	free(b);
	free(hex);
	return (y);
}
