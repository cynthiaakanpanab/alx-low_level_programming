/**
* _strncat - Concatenates two strings using at most n bytes from src.
* @dest: Destination string.
* @src: Source string.
* @n: Maximum number of bytes to use from src.
*
* Return: Pointer to the resulting string dest.
*/
char *_strncat(char *dest, char *src, int n)
{
char *result = dest;

while (*dest != '\0')
{
dest++;
}

while (*src != '\0' && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}

*dest = '\0';

return (result);
}
