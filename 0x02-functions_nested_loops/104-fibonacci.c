#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
unsigned long int a1 = 1, a2 = 2, b1 = 0, b2 = 0;
int i;
printf("%lu, %lu", a1, a2);
for (i = 2; i < 98; i++)
{
if (i % 2 == 0)
{
a1 += a2;
printf(", %lu", a1);
}
else
{
a2 += a1;
printf(", %lu", a2);
}
}
printf("\n");
return (0);
}
