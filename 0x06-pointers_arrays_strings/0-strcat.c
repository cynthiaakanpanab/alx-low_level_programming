/**
* _strcat - Concatenates two strings.
* @dest: Destination string.
* @src: Source string.
*
* Return: Pointer to the resulting string dest.
*/
char *_strcat(char *dest, char *src)
{
char *result = dest;

while (*dest != '\0')
{
dest++;
}

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';

return (result);
}
