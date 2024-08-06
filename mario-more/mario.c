#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Get pyramid height from user
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // Draw the pyramids
    for (int i = 0; i < height; i++)
    {
        // Print leading spaces for the left pyramid
        for (int j = 0; j < height - i - 1; j++)
        {
            printf(" ");
        }

        // Print hashes for the left pyramid
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }

        // Print the gap
        printf("  ");

        // Print hashes for the right pyramid
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }

        // Print a newline to start the next row
        printf("\n");
    }

    return 0;
}
