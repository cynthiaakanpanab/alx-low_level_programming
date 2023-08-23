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
* puts2 - Prints every other character of a string followed by a new line.
* @str: Pointer to the string.
*/
void puts2(char *str)
{
int length = _strlen(str);
int i;

for (i = 0; i < length; i += 2)
{
write(1, &str[i], 1);
}

write(1, "\n", 1);
}
