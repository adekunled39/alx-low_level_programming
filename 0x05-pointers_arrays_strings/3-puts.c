#include "main.h"                                                               

/**
* _puts - a function that print srting
* @str: string input
* Return: strin
*/
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
