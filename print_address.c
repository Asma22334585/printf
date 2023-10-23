#include "main.h"
/**
 * print_address - prints the address.
 * @ap: input.
 * @buf: buffer pointer.
 * @ibuf: index for buffer pointer
 *
 * Return: int.
 */
int print_address(va_list ap, char *buf, unsigned int ibuf)
{
	void *address;
	long int x;
	int i, y, f_d, w;
	char *hex, *bnr;
	char nill[] = "(nil)";

	address = (va_arg(ap, void *));
	if (address == NULL)
	{
		for (i = 0; nill[i]; i++)
			ibuf = handl_buffer(buf, nill[i], ibuf);
		return (5);
	}
	x = (intptr_t)address;
	w = 0;
	if (x < 0)
	{
		x = (x * -1) - 1;
		w = 1;
	}
	bnr = malloc(sizeof(char) * (64 + 1));
	bnr = f_b_r(bnr, x, w, 64);
	hex = malloc(sizeof(char) * (16 + 1));
	hex = f_h_r(bnr, hex, 0, 16);
	ibuf = handl_buffer(buf, '0', ibuf);
	ibuf = handl_buffer(buf, 'x', ibuf);
	for (f_d = i = y = 0; hex[i]; i++)
	{
		if (hex[i] != '0' && f_d == 0)
			f_d = 1;
		if (f_d)
		{
			ibuf = handl_buffer(buf, hex[i], ibuf);
			y++;
		}
	}
	free(bnr);
	free(hex);
	return (y + 2);
}
