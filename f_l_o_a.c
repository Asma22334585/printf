#include "main.h"

/**
 * f_l_o_a - calculates a long octal number
 * @b: array binary.
 * @o: array octal.
 * Return: array.
 */
char *f_l_o_a(char *b, char *o)
{
	int op, i, j, io, l;

	o[22] = '\0';
	for (i = 63, io = 21; i >= 0; i--, io--)
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
