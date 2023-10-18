#include "main.h"

/**
 * f_b_r - decimal to binary
 * @bnr: pointer
 * @k: input
 * @m: negative number
 * @l: size
 * Return: int
 */
char *f_b_r(char *bnr, long int k, int m, int l)
{
	int i;

	for (i = 0; i < l; i++)
		bnr[i] = '0';
	bnr[l] = '\0';
	for (i = l - 1; k > 1; i--)
	{
		if (k == 2)
			bnr[i] = '0';
		else
			bnr[i] = (k % 2) + '0';
		k /= 2;
	}
	if (k != 0)
		bnr[i] = '1';
	if (m)
	{
		for (i = 0; bnr[i]; i++)
			if (bnr[i] == '0')
				bnr[i] = '1';
			else
				bnr[i] = '0';
	}
	return (bnr);
}
