/**
* _strcmp - Compares two strings.
* @s1: First string.
* @s2: Second string.
*
* Return: Difference in ASCII values of first differing characters.
*/
int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
{
s1++;
s2++;
}

return ((int)(*s1) -(int)(*s2));
}
