#include "main.h"
/**
* _strlen_recursion - checks the length of a string
* @s: is the string
* Return: returns the length of the string
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
* check_pal - checks if the string is palindrome
* @i: is the index
* @len: is the length of the string
* @s: is the string
* Return 1 if palindrome or 0 if not
*/

int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}


/**
* is_palindrome - checks if a string is a palindrome
* @s: is the string
* Return: return 1 if the string is palindrome or 0 if otherwise
*
*/

int is_palindrome(char *s)
{
	return (check_pal(s, 0, _strlen_recursion(s)));
}

