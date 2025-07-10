#include <cs50.h>
#include <stdio.h>

int getHeight();

int main(void)
{
    int height = getHeight();

    int brick = 1;
    int space = height - 1;

    // rows
    for (int row = 0; row < height; row++)
    {
        int i = 0;
        int j = 0;

        // print space
        while (i < space)
        {
            printf(" ");
            i++;
        }
        space--;

        // print brick
        while (j < brick)
        {
            printf("#");
            j++;
        }
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
