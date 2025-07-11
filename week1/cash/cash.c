#include <cs50.h>
#include <stdio.h>

int getInput(void);
int reduceChange(int change, int coinType);

int main(void)
{
    int change;
    int coinCount = 0;
    const int pennies = 1;
    const int nickels = 5;
    const int dimes = 10;
    const int quarters = 25;

    change = getInput();

    while (change > 0)
    {
        if (change >= quarters)
        {
            change = reduceChange(change, quarters);
        }
        else if (change >= dimes)
        {
            change = reduceChange(change, dimes);
        }
        else if (change >= nickels)
        {
            change = reduceChange(change, nickels);
        }
        else
        {
            change = reduceChange(change, pennies);
        }
        coinCount++;
    }

    printf("%i\n", coinCount);
}

int getInput(void)
{
    int change;
    do
    {
        change = get_int("Change owed: ");
    }
    while (change <= 0);
    return change;
}

int reduceChange(int change, int coinType)
{
    change -= coinType;
    return change;
}
