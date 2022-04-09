#include <stdio.h>
/**
 * main - Entry point of code
 *
 * Return: Alwyaes return o for us 
 */
int main(void)
{
char game2;
for (game2 = 'a'; game2 <= 'z'; game2++)
{
if (game2 == 'q')
continue;

else if (game2 == 'e')
continue;

putchar(game2);
}

putchar('\n');

return (0);
