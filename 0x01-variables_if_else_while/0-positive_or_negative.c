<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point of the program
*
* Return: Always 0
=======
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Prints if number is positive, zero or negative
*
* Return: Always (Success)
>>>>>>> origin/main
*/
int main(void)
{
int n;
<<<<<<< HEAD
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

=======

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}

>>>>>>> origin/main
return (0);
}
