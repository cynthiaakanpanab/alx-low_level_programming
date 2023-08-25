/**
 * _strncpy - Copies a string, up to n bytes from src to dest.
* @dest: Destination string.
* @src: Source string.
* @n: Maximum number of bytes to copy from src.
*
* Return: Pointer to the resulting string dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
char *result = dest;

while (*src != '\0' && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}

while (n > 0)
{
*dest = '\0';
dest++;
n--;
}

return (result);
}
