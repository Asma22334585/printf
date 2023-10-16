#include "main.h"

/**
 * f_b_r - decimal to binary
 * @c: pointer
 * @k: input
 * @m: negative number
 * @l: size
 * Return: int
 */
char *f_b_r(char *c, long int k, int m, int l)
{
	int i;

	for (i = 0; i < l; i++)
		c[i] = '0';
	c[l] = '\0';
	for (i = l - 1; k > 1; i--)
	{
		if (k == 2)
			c[i] = '0';
		else
			c[i] = (k % 2) + '0';
		k /= 2;
	}
	if (k != 0)
		c[i] = '1';
	if (m)
	{
		for (i = 0; c[i]; i++)
			if (c[i] == '0')
				c[i] = '1';
			else
				c[i] = '0';
	}
	return (c);
}

