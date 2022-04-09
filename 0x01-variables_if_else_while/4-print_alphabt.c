#include <stdio.h>
/**
 * main - Entry point of code
 *
 * Return: Alwyaes return o for us 
 */
int main(void)
{
char lowercase;
for (lowercase  = 'a'; lowercase <= 'z'; lowercase++)
{
if (lowercase == 'q')
continue;

else if (lowercase == 'e')
continue;

putchar(lowercase);
}

putchar('\n');

return (0);
}
