#include <unistd.h>

/**
* print_number - Prints an integer as a character.
* @n: The integer to print.
*/
void print_number(int n)
{
char c;

if (n < 0)
{
write(1, "-", 1);
n = -n;
}

if (n / 10)
{
print_number(n / 10);
}

c = (n % 10) + '0';
write(1, &c, 1);
}

/**
* print_array - Prints n elements of an array of integers followed by a new line.
* @a: Pointer to the array.
* @n: Number of elements to print.
*/
void print_array(int *a, int n)
{
if (n > 0)
{
print_number(a[0]);
n--;

if (n > 0)
{
write(1, ", ", 2);
print_array(&a[1], n);

{
else
{
write(1, "\n", 1);
}
}
