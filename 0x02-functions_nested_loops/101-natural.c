#include "main.h"
#include <stdio.h>

/**
* main - List all the natural numbers below 1024 (excluded)
*        that are multipless of 3 0r 5/
*
* Rturn: Always 0.
*/

int main(void)
{
int i, sum = 0;

for (i = 0; i < 1024; i++)
{
if ((i % 3) == 0 || (i % 5) == 0)
sum += i;
}

printf("%d\n", sum);

return (0);
}
