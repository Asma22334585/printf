#include "main.h"

/**
 * f_l_o_a - calculates a long octal number
 * @bn: array binary.
 * @oc: array octal.
 * Return: array.
 */
char *f_l_o_a(char *bn, char *oc)
{
	int op, i, j, io, l;

	oc[22] = '\0';
	for (i = 63, io = 21; i >= 0; i--, io--)
	{
		if (i > 0)
			l = 4;
		else
			l = 1;
		for (op = 0, j = 1; j <= l; j *= 2, i--)
			op = ((bn[i] - '0') * j) + op;
		i++;
		oc[io] = op + '0';
	}
	return (oc);
}
