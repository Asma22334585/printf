#include "main.h"

/**
 * print_b - convert to binary.
 * @ap: input.
 * @buf: buffer pointer.
 * @ibuf: index for buffer pointer
 * Return: int.
 */

int print_b(va_list ap, char *buf, unsigned int ibuf)
{
	int x, y, i, z, w;
	char *bnr;

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
	bnr = malloc(sizeof(char) * (32 + 1));
	bnr = f_b_r(bnr, x, w, 32);
	z = 0;
	for (y = i = 0; bnr[i]; i++)
	{
		if (z == 0 && bnr[i] == '1')
			z = 1;
		if (z == 1)
		{
			ibuf = handl_buffer(buf, bnr[i], ibuf);
			y++;
		}
	}
	free(bnr);
	return (y);
}
