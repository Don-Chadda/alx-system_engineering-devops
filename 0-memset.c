#include "main.c"

/**
 * *_memset - file memory with a constant byte.
 * @s: pointer to put the constant
 * @b: costant
 * @n max bytes to use
 * Return: s
*/


char *_memset(char *s, char b, unsigned int n)
{

for (unsigned int i = 0; n > 0 ; i++, n--)
{
	s[i] = b;
}

return (s);
}
