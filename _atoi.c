#include "shell.h"

/**
 * interactive -  if shell is interactive mode returns true
 * @info: struct address
 *
 * Return:  if interactive mode 1, otherwise 0
 */
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delim - checks if the char is a delimiter
 * @c: the char that checks
 * @delim:is the delimiter string
 * Return: if true 1 , if false 0
 */
int is_delim(char c, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);
}

/**
 * _isalpha - checks the alphabetic character
 * @c: The char for input
 * Return: if c is alphabetic 1, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/**
 * _atoi - converts the string into an integer
 * @s: the string to be converted
 * Return: if no numbers in string 0, otherwise a converted number
 */

int _atoi(char *s)
{
	int i;
	int a, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (i = 0; s[a] != '\0' && flag != 2; i++)
	{
		if (s[a] == '-')
			sign *= -1;

		if (s[a] >= '0' && s[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[i] -'0');
		}
		else if (flag == 1)
			flag = 2;
	}

	if (sign == -1)
		output = -result;
	else
		output = result;

	return (output);
}
