/**
* string_toupper - Converts all lowercase letters of a string to uppercase.
* @str: Pointer to the string.
*
* Return: Pointer to the modified string.
*/
char *string_toupper(char *str)
{
char *result = str;

while (*str != '\0')
{
if (*str >= 'a' && *str <= 'z')
{
*str = *str - ('a' - 'A');
}
str++;
}

return (result);
}
