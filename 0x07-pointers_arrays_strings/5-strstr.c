#include "main.h"

/**
 * _strstr - check the code
 * @haystack: main string
 * @needle: small string to find in the main one
 * Return: where to find needle
 */
char	*_strstr(char *haystack, char *needle)
{
	char	*hsp;
	char	*nep;
	int		i, m, nl;

	hsp = (char *)haystack;
	nep = (char *)needle;
	i = 0;
	if (nep[0] == '\0')
		return (&hsp[0]);
	nl = 0;
	while (needle[nl])
		nl++;
	while (hsp[i])
	{
		m = 0;
		if (hsp[i] == nep[m])
		{
			while (m < nl && hsp[i + m] == nep[m])
				m++;
			if (m == nl)
				return (&hsp[i]);
		}
		i++;
	}
	return (0);
}
