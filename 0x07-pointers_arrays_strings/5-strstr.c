#include <stddef.h>
/**
* _strstr - Locates a substring within a string.
* @haystack: The string to search in.
* @needle: The substring to find.
*
* Return: A pointer to the first occurrence of the substring
*         in the given string, or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
int i, j;

if (!*needle)
return (haystack);
for (i = 0; haystack[i]; i++)
{
if (haystack[i] == needle[0])
{
for (j = 0; needle[j]; j++)
																				{
if (haystack[i + j] != needle[j])
break;
																											}
if (!needle[j])
return (haystack + i);
}
}

return (NULL);
}
