#include <stdio.h>
#include <cs50.h>

void CalcChange (float amount_owed)
{
    int quarters, dimes, nickles, pennies;
    for (quarters = 0; amount_owed >= 0.25; quarters++)
    amount_owed = amount_owed - 0.25;
    
    for (dimes = 0; amount_owed >= 0.10; dimes++)
    amount_owed = amount_owed - 0.10;
    
    for (nickles = 0; amount_owed >= 0.05; nickles++)
    amount_owed = amount_owed - 0.05;
    
    for (pennies = 0; amount_owed >= 0.01; pennies++)
    amount_owed = amount_owed - 0.01;
    
    printf("\nQuarters:   $%.2f   %d\n", quarters * 0.25, quarters);
    printf("Dimes:      $%.2f   %d\n", dimes * 0.1, dimes);
    printf("Nickles:    $%.2f   %d\n", nickles * 0.05, nickles);
    printf("Pennies:    $%.2f   %d\n", pennies * 0.01, pennies);
    printf("\nMinimum total number of coins owed:\n");
    printf("%d\n", quarters + dimes + nickles + pennies);
    
}

int main (void)
{
    float amount_owed;
    printf("Total amount owed to be split: $");
    amount_owed = GetFloat();
    
    if (amount_owed <= 0)
    {
        do
        {
            printf("Retry: $");
            amount_owed = GetFloat();
        }
        while (amount_owed <= 0);
        CalcChange(amount_owed);
    }
    else {
        CalcChange(amount_owed);
    }
}