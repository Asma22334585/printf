#include "main.h"

/**
 * f_s_o_a - calculates a short octal number
 * @b: array where is stored the binary.
 * @o: array where is stored the octal.
 * Return: array.
 */
char *f_s_o_a(char *b, char *o)
{
	int op, i, j, io, l;

	o[6] = '\0';
	for (i = 15, io = 5; i >= 0; i--, io--)
	{
		if (i > 0)
			l = 4;
		else
			l = 1;
		for (op = 0, j = 1; j <= l; j *= 2, i--)
			op = ((b[i] - '0') * j) + op;
		i++;
		o[io] = op + '0';
	}
	return (o);
}
