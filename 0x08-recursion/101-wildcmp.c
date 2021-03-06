#include "main.h"

int strlen_no_wilds(char *str);

void iterate_wild(char **wildstr);

char *postfix_match(char *str, char *postfix);

int wildcmp(char *s1, char *s2);

/**
* strlen_no_wilds - Returns the length of a string,
*ignoring wildcard characters.
* @str: The string to be measured.
* Return: The length.
*/

int strlen_no_wilds(char *str)

{
int len = 0, index = 0;

if (*(str + index))
{
if (*str != '*')
len++;
index++;
len += strlen_no_wilds(str + index);
}
return (len);
}

/**
* iterate_wild - Iterates through a string located at a wildcard
* until it points to a non-wildcard character.
* @wildstr: The string to be iterated through.
*/

void iterate_wild(char **wildstr)

{
if (**wildstr == '*')
{
(*wildstr)++;
iterate_wild(wildstr);
}
}

/**
* postfix_match - Checks if a string str matches the postfix of
* another string potentially containing wildcards.
* @str: The string to be matched.
* @postfix: The postfix.
* Return: If str and postfix are identical - a pointer to the null byte
*located at the end of post 
* Otherwise - a pointer to the first unmatched character in postfix.
*/
