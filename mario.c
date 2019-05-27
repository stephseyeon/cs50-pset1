#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = get_int("Height: ");
    int notprint = height - 1;
    if (height > 0 && height < 9)
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col < height; col++)
        {
            if (notprint > col)
            {
                printf(".");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
        notprint--;
    }
}
