#include <cs50.h>
#include <stdio.h>


int main(void) 
{
    int height; 
    do
    {
        // prompt and vaidate user for their input
        height = get_int("Height: ");
        // printf("Stored: %i\n", height); 
    }
    // ensure that the users input is positive int between 1 and 8
    while (height < 1 || height > 8); 

    // print row
    for (int i = 0; i < height; ++i)
    {
        // print space 
        for (int j = 0; j < height - i - 1; ++j)
        {
            printf(" ");
        }
        // print # 
        for (int j = 0; j < i + 1; ++j)
        {
            printf("#");
        }
        // new line
        printf("\n");
    }
}