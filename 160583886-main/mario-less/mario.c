#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num, i, j;
    num = get_int("Enter the number of rows:");
    while (num > 8 || num < 1)
    {
        num = get_int("Enter the number of rows:");
    }
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num - i - 1; j++)
        {
            printf(" ");
        }
        for (j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
