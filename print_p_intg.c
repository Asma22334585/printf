#include "main.h"

/**
 * printpint - print with plus symbol
 * @ap: input.
 * @buf: buffer pointer.
 * @ibuf: index for buffer pointer.
 * Return: int.
 */
int printpint(va_list ap, char *buf, unsigned int ibuf)
{
	int x;
	unsigned int k, int_t, i, d;

	x = va_arg(ap, int);
	if (x < 0)
	{
		k = x * -1;
		ibuf = handl_buf(buf, '-', ibuf);
	}
	else
	{
		k = x;
		ibuf = handl_buf(buf, '+', ibuf);
	}
	int_t = k;
	d = 1;
	while (int_t > 9)
	{
		d *= 10;
		int_t /= 10;
	}
	for (i = 0; d > 0; d /= 10, i++)
	{
		ibuf = handl_buf(buf, ((k / d) % 10) + '0', ibuf);
	}
	return (i + 1);
}
