#include <stdio.h>

/**
* times_table - Prints the multiplication table in the provided format. 
*/
void times_table(void)
{
int row, column, result;

for (row = 0; row <= 9; row++)
{
for (column = 0; column <= 9; column++)
{
result = row * column;
            
if (column == 0)
printf("%d", result);
else
printf(", %2d", result);
}
        
printf("$\n");
}
}
