#include "main.h"
/**
 * print_char - writes the character c to stdout
 * @ap: input.
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: 1.
 */
int print_char(va_list ap, char *buf, unsigned int ibuf)
{
	char c;

	c = va_arg(ap, int);
	handl_buf(buf, c, ibuf);

	return (1);
}
