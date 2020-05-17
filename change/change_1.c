#include <stdio.h>
#include <cs50.h>

// prototypes
void CalcChange (float amount_owed, int answer);

int main (void)
{
	char answer;
	float amount_owed;
	while (true)
	{
		do {
			printf("Include notes? [Y/N/Q]: ");
			answer = GetChar();
		}
		while ((answer != 'Y') && (answer != 'y') && (answer != 'N') && (answer != 'n') && (answer != 'q') && (answer != 'Q'));

		if ((answer == 'Y') || (answer == 'y'))
		{
			
		    printf("Total amount owed to be split: £");
		    amount_owed = GetFloat();
		    
		    if (amount_owed <= 0)
		    {
		        do
		        {
		            printf("Retry: £");
		            amount_owed = GetFloat();
		        }
		        while (amount_owed <= 0);
		        CalcChange(amount_owed, 1);
		    }
		    else {
		        CalcChange(amount_owed, 1);
		    }
		}
		else if ((answer == 'N') || (answer == 'n'))
		{
		    
		    printf("Total amount owed to be split: £");
		    amount_owed = GetFloat();
		    
		    if (amount_owed <= 0)
		    {
		        do
		        {
		            printf("Retry: £");
		            amount_owed = GetFloat();
		        }
		        while (amount_owed <= 0);
		        CalcChange(amount_owed, 0);
		    }
		    else {
		        CalcChange(amount_owed, 0);
		    }
		}
		else
		{
			exit(0);
		}
	}
}

void CalcChange (float amount_owed, int answer)
{
	int fifty_note, twenty_note, ten_note, five_note, two_pound, pound, fifty_pence, twenty_pence, ten_pence, five_pence, one_pence;
	if (answer == 1)
	{

	    for (fifty_note = 0; amount_owed >= 50; fifty_note++)
	    amount_owed = amount_owed - 50;

		for (twenty_note = 0; amount_owed >= 20; twenty_note++)
	    amount_owed = amount_owed - 20;

		for (ten_note = 0; amount_owed >= 10; ten_note++)
	    amount_owed = amount_owed - 10;

		for (five_note = 0; amount_owed >= 5; five_note++)
	    amount_owed = amount_owed - 5;

		for (two_pound = 0; amount_owed >= 2; two_pound++)
	    amount_owed = amount_owed - 2;

	    for (pound = 0; amount_owed >= 1; pound++)
	    amount_owed = amount_owed - 1;

		for (fifty_pence = 0; amount_owed >= 0.50; fifty_pence++)
	    amount_owed = amount_owed - 0.50;

	    for (twenty_pence = 0; amount_owed >= 0.20; twenty_pence++)
	    amount_owed = amount_owed - 0.20;
	    
	    for (ten_pence = 0; amount_owed >= 0.10; ten_pence++)
	    amount_owed = amount_owed - 0.10;
	    
	    for (five_pence = 0; amount_owed >= 0.05; five_pence++)
	    amount_owed = amount_owed - 0.05;
	    
	    for (one_pence = 0; amount_owed >= 0.01; one_pence++)
	    amount_owed = amount_owed - 0.01;
	    
	    printf("Notes\n");
	    printf("\n£50:    £%d   %d\n", fifty_note * 50, fifty_note);
	    printf("£20:    £%d   %d\n", twenty_note * 20, twenty_note);
	    printf("£10:    £%d   %d\n", ten_note * 10, ten_note);
	    printf("£5:     £%d   %d\n", five_note * 5, five_note);
	    printf("\nCoins\n");
	    printf("\n£2:     £%d     %d\n", two_pound * 2, two_pound);
	    printf("£1:     £%d     %d\n", pound * 1, pound);
	    printf("50p:    £%.2f   %d\n", fifty_pence * 0.5, fifty_pence);
	    printf("20p:    £%.2f   %d\n", twenty_pence * 0.2, twenty_pence);
	    printf("10p:    £%.2f   %d\n", ten_pence * 0.1, ten_pence);
	    printf("5p:     £%.2f   %d\n", five_pence * 0.05, five_pence);
	    printf("1p:     £%.2f   %d\n", one_pence * 0.01, one_pence);
	    printf("\nMinimum total number of notes owed:\n");
	    printf("%d\n", fifty_note + twenty_note + ten_note + five_note);
	    printf("\nMinimum total number of coins owed:\n");
	    printf("%d\n", two_pound + pound + fifty_pence + twenty_pence + ten_pence + five_pence + one_pence);
	}
    else {

	    for (two_pound = 0; amount_owed >= 2; two_pound++)
	    amount_owed = amount_owed - 2;

	    for (pound = 0; amount_owed >= 1; pound++)
	    amount_owed = amount_owed - 1;

	    for (fifty_pence = 0; amount_owed >= 0.50; fifty_pence++)
	    amount_owed = amount_owed - 0.50;

	    for (twenty_pence = 0; amount_owed >= 0.20; twenty_pence++)
	    amount_owed = amount_owed - 0.20;
	    
	    for (ten_pence = 0; amount_owed >= 0.10; ten_pence++)
	    amount_owed = amount_owed - 0.10;
	    
	    for (five_pence = 0; amount_owed >= 0.05; five_pence++)
	    amount_owed = amount_owed - 0.05;
	    
	    for (one_pence = 0; amount_owed >= 0.01; one_pence++)
	    amount_owed = amount_owed - 0.01;
	    
	    printf("\n£2:     £%d   %d\n", two_pound * 2, two_pound);
	    printf("£1:     £%d   %d\n", pound * 1, pound);
	    printf("50p:    £%.2f   %d\n", fifty_pence * 0.5, fifty_pence);
	    printf("20p:    £%.2f   %d\n", twenty_pence * 0.2, twenty_pence);
	    printf("10p:    £%.2f   %d\n", ten_pence * 0.1, ten_pence);
	    printf("5p:     £%.2f   %d\n", five_pence * 0.05, five_pence);
	    printf("1p:     £%.2f   %d\n", one_pence * 0.01, one_pence);
	    printf("\nMinimum total number of coins owed:\n");
	    printf("%d\n", two_pound + pound + fifty_pence + twenty_pence + ten_pence + five_pence + one_pence);
    }
    
}