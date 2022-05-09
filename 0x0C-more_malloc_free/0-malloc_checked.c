#include <stdlib.h>
/**
* malloc_checked - allocates memory using malloc
* @b: amount of bytes
* Return: pointer to our new allocated memory
*         exit with 98 if malloc fails
*/

void *malloc_checked(unsigned int b)
{
void *new_women;
new_women = malloc(b);
if (new_women == NULL)
exit(98);
return (new-women);
}
