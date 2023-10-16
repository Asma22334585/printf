#include "main.h"

/**
 * print_r - prints the reversed string.
 * @ap: input.
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: int.
 */
int print_r(va_list ap, char *buf, unsigned int ibuf)
{
	char *s;
	unsigned int i;
	int j = 0;
	char c[] = "(nil)";

	s = va_arg(ap, char *);
	if (s == NULL)
	{
		for (i = 0; c[i]; i++)
			ibuf = handl_buf(buf, c[i], ibuf);
		return (6);
	}
	for (i = 0; s[i]; i++)
		;
	j = i - 1;
	for (; j >= 0; j--)
	{
		ibuf = handl_buf(buf, s[j], ibuf);
	}
	return (i);
}
