#include "main.h"

/**
 * print_buffer - prints buffer
 * @buf: buffer pointer
 * @nbuf: number of bytes to print
 * Return: int.
 */
int print_buffer(char *buf, unsigned int nbuf)
{
	return (write(1, buf, nbuf));
}
