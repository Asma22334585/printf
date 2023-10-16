#include "main.h"

/**
 * printshunint - prints a short unsigned integer
 * @ap: int.
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: int.
 */
int printshunint(va_list ap, char *buf, unsigned int ibuf)
{
	unsigned short int k, int_t, i, d;

	k = va_arg(ap, unsigned int);

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
	return (i);
}

