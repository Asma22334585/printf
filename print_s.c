#include "main.h"

/**
 * print_s - writes the string.
 * @ap: input.
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: 1.
 */

int print_s(va_list ap, char *buf, unsigned int ibuf)
{
	char *s;
	unsigned int i;
	char nill[] = "(null)";

	s = va_arg(ap, char *);
	if (s == NULL)
	{
		for (i = 0; nill[i]; i++)
			ibuf = handl_buffer(buf, nill[i], ibuf);
		return (6);
	}
	for (i = 0; s[i]; i++)
		ibuf = handl_buffer(buf, s[i], ibuf);
	return (i);
}
