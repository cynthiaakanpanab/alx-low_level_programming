#include <stddef.h>
/**
* _strspn - Gets the length of a prefix substring.
* @s: Pointer to the string to be searched.
* @accept: Pointer to the string containing the bytes to be matched.
*
* Return: Number of bytes in the initial segment of @s consisting
*         only of bytes from @accept.
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int matched;

while (*s)
{
matched = 0;

while (*accept)

{
if (*s == *accept)
{

matched = 1;
count++;
break;

}
accept++;
}

if (!matched)
break;

s++;
accept = accept - count; /* Reset accept pointer */
}

return (count);
}
