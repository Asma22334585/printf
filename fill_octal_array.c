#include "main.h"

/**
 * fill_octal_array - writes the character c to stdout
 * @bn: array binary.
 * @oc: array octal.
 * Return: array.
 */
char *fill_octal_array(char *bn, char *oc)
{
	int op, i, j, io, l;

	oc[11] = '\0';
	for (i = 31, io = 10; i >= 0; i--, io--)
	{
		if (i > 1)
			l = 4;
		else
			l = 2;
		for (op = 0, j = 1; j <= l; j *= 2, i--)
			op = ((bn[i] - '0') * j) + op;
		i++;
		oc[io] = op + '0';
	}
	return (oc);
}
