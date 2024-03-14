#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // declaring variables
    int num, i, j;
    // taking input from user
    num = get_int("Enter the number of rows:");
    // ensuring the input is right using a while loop
    while (num > 8 || num < 1)
    {
        num = get_int("Enter the number of rows:");
    }
    // loop for rows
    for (i = 0; i < num; i++)
    {
        // loop for spaces
        for (j = 0; j < num - i - 1; j++)
        {
            printf(" ");
        }
        // loop for # before spaces
        for (j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        // printing spaces
        printf("  ");
        // loop for # after spaces
        for (j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        // ensuring the curzor moves to next line for the next row
        printf("\n");
    }
}
