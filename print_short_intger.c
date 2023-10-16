#include "main.h"

/**
 * printshint - prints a short integer
 * @ap: input.
 * @buf: buffer pointer.
 * @ibuf: index for buffer pointer.
 * Return: int.
 */
int printshint(va_list ap, char *buf, unsigned int ibuf)
{
	short int x;
	unsigned short int k, int_t, i, d, m;

	x = va_arg(ap, int);
	m = 0;
	if (x < 0)
	{
		k = x * -1;
		ibuf = handl_buf(buf, '-', ibuf);
		m = 1;
	}
	else
	{
		k = x;
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
	return (i + m);
}

