#include <unistd.h>

/**
* _strlen - Calculates the length of a string.
* @s: Pointer to the string.
*
* Return: Length of the string.
*/
int _strlen(char *s)
{
int length = 0;

while (*s != '\0')
{
length++;
s++;
}

return (length);
}

/**
* print_rev - Prints a string in reverse followed by a new line.
* @s: Pointer to the string to be printed in reverse.
*/
void print_rev(char *s)
{
int length = _strlen(s);
int i;

for (i = length - 1; i >= 0; i--)
{
write(1, &s[i], 1);
}

write(1, "\n", 1);
}
