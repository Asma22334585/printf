#include "main.h"

/**
 * handl_buffer - concatenates the buffer characters.
 * @buf: buffer pointer.
 * @c: charcter.
 * @ibuf: index of buffer pointer.
 * Return: index.
 */
unsigned int handl_buffer(char *buf, char c, unsigned int ibuf)
{
	if (ibuf == 1024)
	{
		print_buffer(buf, ibuf);
		ibuf = 0;
	}
	buf[ibuf] = c;
	ibuf++;
	return (ibuf);
}
