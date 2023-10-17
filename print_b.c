#include "main.h"

/**
 * print_b - convert to binary.
 * @ap: input.
 * Return: int.
 */

int print_b(va_list ap, char *buf, unsigned int ibuf)
{
	int x, y, i, z, w;
	char *c;

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
	c = malloc(sizeof(char) * (32 + 1));
	c = f_b_r(c, x, w, 32);
	z = 0;
	for (y = i = 0; c[i]; i++)
	{
		if (z == 0 && c[i] == '1')
			z = 1;
		if (z == 1)
		{
			ibuf = handl_buffer(buf, c[i], ibuf);
			y++;
		}
	}
	free(c);
	return (y);
}
