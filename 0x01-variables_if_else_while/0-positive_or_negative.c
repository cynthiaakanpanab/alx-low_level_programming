#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point of the program
*
* Return: Always 0
*/
int main(void)
{
int n;
srand(time(0));  /* Seed for random number generation based on current time */
n = rand() % 201 - 100;  /* Generates a random number between -100 and 100 */

printf("The number %d is ", n);

if (n > 0)
{
printf("positive");
}
else if (n == 0)
{
printf("zero");
}
else
{
printf("negative");
}

printf("\n");

return (0);
}
