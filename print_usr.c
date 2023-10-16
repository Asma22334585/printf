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
	unsigned char *str;
	char *hex, *b;
	unsigned int i, sum, op;

	str = va_arg(ap, unsigned char *);
	b = malloc(sizeof(char) * (32 + 1));
	hex = malloc(sizeof(char) * (8 + 1));
	for (sum = i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			ibuf = handl_buf(buf, '\\', ibuf);
			ibuf = handl_buf(buf, 'x', ibuf);
			op = str[i];
			b = f_b_r(b, op, 0, 32);
			hex = f_h_r(b, hex, 1, 8);
			ibuf = handl_buf(buf, hex[6], ibuf);
			ibuf = handl_buf(buf, hex[7], ibuf);
			sum += 3;
		}
		else
			ibuf = handl_buf(buf, str[i], ibuf);
	}
	free(b);
	free(hex);
	return (i + sum);
}
