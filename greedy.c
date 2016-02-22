/**
* pset 1
* greedy.c
* Evan Million <million.evan@gmail.com>
**/
 
 
#include <cs50.h>
#include <stdio.h>
#include <math.h>
 
int main(void)
{
    // Initializing change for user's input
    float change = 0;
    int coin = 0;
    
    do 
    {
        if (change < 0)
        {
            // Will skip this on run since change is initialized at 0
            // and run if the user inputs a number lower than 0 or a non-number
            printf("Retry:");
            change = GetFloat();
        }
        else
        { 
            // Asks the user for input defining the amount of
            // change the customer needs.
            printf("Change: ");
            change = GetFloat();
        }      
    }
    // The code below will only compute if the user's input is 
    // a positive integer.
    while (change <= 0); 

    // Initializing converted to convert the user's input to an int.

    int converted = (int)round(change * 100.0);
    
    /** 
    * For each while loop the coin count increases by 1 each 
    * time it runs. The coin amount (25, 10, 5 and 1) used in each while loop 
    * is being subtracted from change and attaching the new value to change.
    **/
    
    while (converted >= 25)
    {
        converted -= 25;
        coin++;
    }
    while (converted >= 10)
    {
        converted -= 10;
        coin++;
    }
    while (converted >= 5)
    {
        converted -= 5;
        coin++;
    }
    while (converted >= 1)
    {
        converted -=1;
        coin++;
    }
    // printf displays the final amount of coins
    printf("%i\n", coin);
}
