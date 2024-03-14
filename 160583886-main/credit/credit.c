#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long card_num = get_long("Number:");
    // number of digits
    long i = card_num;
    int count = 0;
    do
    {
        i /= 10;
        count++;
    }
    while (i != 0);

    // first two digits
    i = card_num;
    long first_two_digits = 0;
    while (i > 100)
    {
        i /= 10;
        first_two_digits = i;
    }

    i = card_num;
    int curr_num;
    int second_last;
    int other_digits = 0;
    int second_digits = 0;
    int total;
    int digit1, digit2;
    while (i > 0)
    {
        curr_num = i % 10;
        i /= 10;
        other_digits += curr_num;

        second_last = i % 10;
        i /= 10;
        second_last *= 2;
        digit1 = second_last % 10;
        digit2 = second_last / 10;
        second_digits += digit1 + digit2;
    }
    total = second_digits + other_digits;
    if (total % 10 == 0)
    {
        if ((count == 15) && (first_two_digits == 34 || first_two_digits == 37))
        {
            printf("AMEX\n");
        }
        else if ((count == 16) && (first_two_digits >= 51 && first_two_digits <= 55))
        {
            printf("MASTERCARD\n");
        }
        else if ((count == 16 || count == 13) && (first_two_digits / 10 == 4))
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}
