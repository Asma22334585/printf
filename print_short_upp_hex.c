#include "main.h"

/**
 * printhupphex - prints a short decimal in hex
 * @ap: character.
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: int
 */
int printhupphex(va_list ap, char *buf, unsigned int ibuf)
{
	short int x, i, w, y, f_d;
	char *hex, *bnr;

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

	bnr = malloc(sizeof(char) * (16 + 1));
	bnr = f_b_r(bnr, x, w, 16);
	hex = malloc(sizeof(char) * (4 + 1));
	hex = f_h_r(bnr, hex, 1, 4);

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
