#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // #1 prompt for positive int 1-8
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    // row = i
    for (int i = 0; i < n; i++)
    {
        // left pyramid
        // space = j
        for (int j = 0; j < n - 1 - i; ++j)
        {
            printf(" ");
        }
        // # = j
        for (int j = 0; j < i + 1; ++j)
        {
            printf("#");
        }

        // space
        printf("  ");

        // right pyramid
        // #
        for (int j = 0; j < i + 1; ++j)
        {
            printf("#");
        }
        // space
        // for (int j = 0; j < n - 1 - i; ++j)
        // {
        //     printf(" ");
        // }

        // new line
        printf("\n");
    }
}