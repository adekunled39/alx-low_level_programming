#include <stdio.h>
/**
*main -Entry point
*
* Return: Always 0 (success/correction)
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
