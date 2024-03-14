#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int money, num, coin_25, coin_10, coin_5, coin_1;
    money = get_int("Change owed: ");
    while (money < 0)
    {
        money = get_int("Change owed: ");
    }
    // calculating coins by diving the money with 25's, 10's, 5's, and 1's. Removing the value from the money and calculating the
    // next number of coins as the data types are int and do not return floating point of the division
    coin_25 = money / 25;
    coin_10 = (money - (coin_25 * 25)) / 10;
    coin_5 = (money - ((coin_25 * 25) + (coin_10 * 10))) / 5;
    coin_1 = (money - ((coin_25 * 25) + (coin_10 * 10) + (coin_5 * 5)));
    num = coin_25 + coin_10 + coin_5 + coin_1;
    printf("%i\n", num);
}
