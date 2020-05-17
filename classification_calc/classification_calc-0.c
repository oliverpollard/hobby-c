#include <cs50.h>
#include <stdio.h>
#include <math.h>

/**
*
* by Oliver Pollard
* oliver.pollard1@gmail.com
*
* Function to calculate the percentage grade and resulting classifcation for Uni of Leeds modules
*/

//protoypes
void GradeCalculator (int number_modules);
int GetScores (int module_nunber);

int main (void)
{
	int number_modules;
	printf("CLASSIFICATION CALCULATOR\n\n");
	printf("Required Information.\n");
	printf("• Module scores\n");
	printf("• Module credit weightings\n\n");
	printf("Number of modules: ");
	number_modules = GetInt();

	if (number_modules <= 0)
	{
		do 
		{
			printf("Retry: ");
			number_modules = GetInt();
		}
		while (number_modules <= 0);

		GradeCalculator(number_modules);
	}
	else {
		GradeCalculator(number_modules);
	}
}

void GradeCalculator (int number_modules)
{
	int module_scores[number_modules][2];
	int total_credits = 0;
	int achieved_credits = 0;

	for (int i = 0; i <= (number_modules - 1); i++)
	{
		printf("Module %d credits: ", i + 1);
		int credits = GetInt();
		if (credits <= 0)
		{
			do 
			{
				printf("Retry: ");
				credits = GetInt();
			}
			while (credits <= 0);

			module_scores[i][0] = credits;
			module_scores[i][1] = GetScores(i);
		}
		else {
			module_scores[i][0] = credits;
			module_scores[i][1] = GetScores(i);
		}
	}


	for (int j = 0; j <= (number_modules - 1); j++)
	{
		total_credits = (total_credits + module_scores[j][0]);
		achieved_credits = achieved_credits + (module_scores[j][0] * (module_scores[j][1]));
	}
	float achieved_percentage = (achieved_credits / total_credits);
	printf("\nAchieved %.2f%%\n", achieved_percentage);

	if (achieved_percentage >= 70)
	{
		printf("Classification: 1st\n\n");
			
	}
	else if ((achieved_percentage) < 70 && (achieved_percentage >= 60))
	{
		printf("Classification: 2:1\n\n");
		
	}
	else if ((achieved_percentage < 60) && (achieved_percentage >= 50))
	{
		printf("Classification: 2:2\n\n");
		
	}
	else if ((achieved_percentage < 50) && (achieved_percentage >= 40))
	{
		printf("Classification: 2:2\n\n");
		
	}
	else if (achieved_percentage < 40)
	{
		printf("Classification: Fail\n\n");
		
	}
	else
	{
		printf("Invalid");
	}

}

int GetScores (int module_nunber)
{
	printf("Module %d percentage score: ", module_nunber + 1);
	int score = GetInt();

	if (score < 0)
		{
			do 
			{
				printf("Retry: ");
				score = GetInt();
			}
			while (score <= 0);

			return score;
		}
		else {
			return score;
		}
}






