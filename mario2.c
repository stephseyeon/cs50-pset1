#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = get_int("height: ");
    int notprint = height - 1;
    if (height > 0 && height <= 8)
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col < notprint-row; col++)
        {
            printf(" ");
        }
        for (int col = 0; col < row + 1; col++)
        {
            printf("#");
        }    
        
        printf("  ");
        
        for (int col = 0; col < row + 1; col++)
        {
            printf("#");
        }
        for (int col = 0; col < notprint-row; col++)
        {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
