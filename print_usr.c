#include "main.h"

/**
 * print_usr - print str and va of
 * non-printed character
 * @ap: input.
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: int.
 */
int print_usr(va_list ap, char *buf, unsigned int ibuf)
{
	unsigned char *s;
	char *hex, *bnr;
	unsigned int i, sum, op;

	s = va_arg(ap, unsigned char *);
	bnr = malloc(sizeof(char) * (32 + 1));
	hex = malloc(sizeof(char) * (8 + 1));
	for (sum = i = 0; s[i]; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			ibuf = handl_buffer(buf, '\\', ibuf);
			ibuf = handl_buffer(buf, 'x', ibuf);
			op = s[i];
			bnr = f_b_r(bnr, op, 0, 32);
			hex = f_h_r(bnr, hex, 1, 8);
			ibuf = handl_buffer(buf, hex[6], ibuf);
			ibuf = handl_buffer(buf, hex[7], ibuf);
			sum += 3;
		}
		else
			ibuf = handl_buffer(buf, s[i], ibuf);
	}
	free(bnr);
	free(hex);
	return (i + sum);
}
