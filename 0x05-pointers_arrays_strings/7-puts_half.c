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
* puts_half - Prints the second half of a string followed by a new line.
* @str: Pointer to the string.
*/
void puts_half(char *str)
{
int length = _strlen(str);
int start;

if (length % 2 == 0)
{
start = length / 2;
}
else
{
start = (length + 1) / 2;
}

while (str[start] != '\0')
{
write(1, &str[start], 1);
start++;
}

write(1, "\n", 1);
}
