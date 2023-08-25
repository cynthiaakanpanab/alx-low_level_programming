#include "main.h"

/**
* rot13 - Encodes a string using ROT13.
* @str: Pointer to the string to be encoded.
*
* Return: Pointer to the encoded string.
*/
char *rot13(char *str)
{
int i, j;
char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; str[i] != '\0'; i++)
{
int found = 0;

for (j = 0; input[j] != '\0'; j++)
{
if (str[i] == input[j])
{
str[i] = output[j];
found = 1;
break;
}
}

if (found == 0)
{
str[i] = str[i];
}
}

return (str);
}
