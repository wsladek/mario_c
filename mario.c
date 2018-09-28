#include <stdio.h>
#include <cs50.h>

int main(void)
{

    //User Input for how tall the blocks should be
    int height = get_int("Height: ");

    while (height < 0 || height >23)
    {
        height = get_int("Height: ");
    }

    //What row are we on?
    for (int row = 1; row != height+1; row++)
    {
        //Print First Spaces
        for (int firstspaces = row; firstspaces < height; firstspaces++)
        {
        printf(" ");
        }

        //Print First Blocks
        for (int firstblocks = 0; firstblocks < row; firstblocks++)
        {
            printf("#");
        }

        //Print Gap
        printf("  ");

        //Print Second Blocks
        for (int secondblocks = 0; secondblocks < row; secondblocks++)
        {
            printf("#");
        }

        //Print line
        printf("\n");
    }
}