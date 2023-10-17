#include "main.h"

/**
 * print_prg - print character.
 * @u: input.
 * @buf: buffer pointer.
 * @q: index for buffer pointer.
 * Return: 1.
 */

int print_prg(va_list u, char *buf, unsigned int q)
{
	(void)u;
	handl_buffer(buf, '%', q);

	return (1);
}
