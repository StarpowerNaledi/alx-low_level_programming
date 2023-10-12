#include "main.h"

int main()
{
    int i, j;
    // outer loop to print 10 rows
    for (i = 0; i < 10; i++)
    {
        // inner loop to print numbers from 0 to 14
        for (j = 0; j < 15; j++)
        {
            _putchar("%d", j);
        }
        // print a new line after each row
        _putchar("\n");
    }
    return 0;
}
