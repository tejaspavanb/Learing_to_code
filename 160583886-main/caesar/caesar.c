#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{

    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    for (int i = 0, len = strlen(argv[1]); i < len; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    string name = get_string("plaintext:  ");
    int num = atoi(argv[1]);
    if (num > 26)
    {
        num = num % 26;
    }
    int num2 = 0;

    printf("ciphertext:  ");

    for (int i = 0, len = strlen(name); i < len; i++)
    {
        if (name[i] == '!' || name[i] == ' ' || name[i] == ',')
        {
            printf("%c", name[i]);
            continue;
        }
        char curr = name[i];
        num2 = name[i] + num;
        if (isupper(curr))
        {
            if (num2 > 90)
            {
                int diff = num2 - 90;
                num2 = 64 + diff;
            }
        }
        if (islower(curr))
        {
            if (num2 > 122)
            {
                int diff = num2 - 122;
                num2 = 96 + diff;
            }
        }

        printf("%c", num2);
    }
    printf("\n");
}
