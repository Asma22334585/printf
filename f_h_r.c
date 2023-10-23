#include "main.h"

/**
 * f_h_r - character c to stdout
 * @bn: array.
 * @hex: array where is stored the hexadecimal.
 * @upp: integer.
 * @l: size
 * Return: array.
 */
char *f_h_r(char *bn, char *hex, int upp, int l)
{
	int op, i, j, t;

	hex[l] = '\0';
	if (upp)
		t = 55;
	else
		t = 87;
	for (i = (l * 4) - 1; i >= 0; i--)
	{
		for (op = 0, j = 1; j <= 8; j *= 2, i--)
			op = ((bn[i] - '0') * j) + op;
		i++;
		if (op < 10)
			hex[i / 4] = op + 48;
		else
			hex[i / 4] = op + t;
	}
	return (hex);
}
