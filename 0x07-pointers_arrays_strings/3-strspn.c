/**
* _strspn - Gets the length of a prefix substring.
* @s: Pointer to the string to be searched.
* @accept: Pointer to the string containing the bytes to be matched.
*
* Return: Number of bytes in the initial segment of @s consisting
*         only of bytes from @accept.
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int i, j;

for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
{
count++;
break;
}
}
if (!accept[j])
break;
}

return (i);
}
