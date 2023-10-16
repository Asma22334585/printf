#include "main.h"

/**
 * fill_octal_array - writes the character c to stdout
 * @b: array binary.
 * @o: array octal.
 * Return: array.
 */
char *fill_octal_array(char *b, char *o)
{
	int op, i, j, io, l;

	o[11] = '\0';
	for (i = 31, io = 10; i >= 0; i--, io--)
	{
		if (i > 1)
			l = 4;
		else
			l = 2;
		for (op = 0, j = 1; j <= l; j *= 2, i--)
			op = ((b[i] - '0') * j) + op;
		i++;
		o[io] = op + '0';
	}
	return (o);
}
