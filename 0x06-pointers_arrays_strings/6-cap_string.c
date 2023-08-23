/**
* cap_string - Capitalizes all words of a string.
* @str: Pointer to the string.
*
* Return: Pointer to the modified string.
*/
char *cap_string(char *str)
{
char *result = str;
int capitalize_next = 1;

while (*str != '\0')
{
if (*str == ' ' || *str == '\t' || *str == '\n' ||
*str == ',' || *str == ';' || *str == '.' ||
*str == '!' || *str == '?' || *str == '"' ||
*str == '(' || *str == ')' || *str == '{' ||
*str == '}')
{
capitalize_next = 1;
}
else if ((*str >= 'a' && *str <= 'z') && capitalize_next)
{
*str = *str - ('a' - 'A');
capitalize_next = 0;
}
else
{
capitalize_next = 0;
}

str++;
}

return (result);
}
