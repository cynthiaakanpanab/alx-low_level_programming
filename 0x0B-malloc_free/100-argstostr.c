#include <stdlib.h>

/**
* argstostr - Concatenate all the arguments of the program.
* @ac: The argument count.
* @av: An array of argument strings.
* Return: A pointer to the concatenated string, or NULL if it fails.
*/
char *argstostr(int ac, char **av)
{
int i, j, len = 0, total_len = 0;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
len++;
total_len += len + 1;
len = 0;
}

str = (char *)malloc(total_len  *sizeof(char) + 1);
if (str == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
str[len++] = av[i][j];
str[len++] = '\n';
}

str[len] = '\0';
return (str);
}
