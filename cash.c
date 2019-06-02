#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{   
   
    float quarter = 0.25;
    float dime = 0.10;
    float nickel = 0.05;
    float penny = 0.01;
    int coins = 0;
    
    float change;
    do
    {
        change = get_float("Change: ");
    }
    while (change < 0);
    
    int cents = round(change * 100.00);
    
    while (change >= quarter)
    {
        coins ++;
        change -= quarter;
    }
    while (change >= dime)
    {
        coins ++;
        change -= dime;
    }    
    while (change >= nickel)
    {
        coins ++;
        change -= nickel;
    }
    while (change >= penny)
    {
        coins ++;
        change -= penny;
    }

    printf("%i\n", coins) ;
}
