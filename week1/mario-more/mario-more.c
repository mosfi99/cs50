#include <cs50.h>
#include <stdio.h>

int getHeight();
void printChar(int n, char c);

int main(void)
{
    int height = getHeight();

    int brick = 1;
    int space = height - 1;

    // rows
    for (int row = 0; row < height; row++)
    {
        // space
        printChar(space, ' ');
        space--;

        // brick
        printChar(brick, '#');

        // double space
        printChar(2, ' ');

        // brick again
        printChar(brick, '#');
        brick++;

        // new line after each row
        printf("\n");
    }
}

int getHeight(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    return n;
};

void printChar(int n, char c)
{

    for (int i = 0; i < n; i++)
    {
        printf("%c", c);
    }
};

/*
// Previous attempt:

#include <cs50.h>
#include <stdio.h>

int getHeight();
void printSpace(int space);
void printBrick(int brick);

int main(void)
{
    int height = getHeight();

    int brick = 1;
    int space = height - 1;

    // rows
    for (int row = 0; row < height; row++)
    {
        // space
        printSpace(space);
        space--;

        // brick
        printBrick(brick);

        // double space
        printf("  ");

        // brick again
        printBrick(brick);
        brick++;

        // new line after each row
        printf("\n");
    }
}

int getHeight(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    return n;
};


void printSpace(int space) {

    for (int i = 0; i < space; i++)
    {
        printf(" ");
    }
};

void printBrick(int brick) {

    for (int i = 0; i < brick; i++)
    {
        printf("#");
    }
};
*/
