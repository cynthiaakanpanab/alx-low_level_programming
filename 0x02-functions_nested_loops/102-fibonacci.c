#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
long int a = 1, b = 2, next;
printf("%ld, %ld", a, b);
for (i = 2; i < 50; i++)
{
next = a + b;
printf(", %ld", next);
a = b;
b = next;
}
printf("\n");
return (0);
}
