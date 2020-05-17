#include <stdio.h>

#define SCALE 4.0/3.0
#define PI 3.14

int main()
{
	int radius;

	printf("Enter radius of sphere (m): ");
	scanf("%d",&radius);

	float volume = SCALE * PI * radius * radius * radius;
	printf("Volume: %.1fm^3\n", volume);
}