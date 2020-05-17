#include <stdio.h>

#define SCALE 4.0/3.0
#define PI 3.14

int main()
{
	int radius = 10;
	float volume = SCALE * PI * radius * radius * radius;

	printf("Radius of sphere: %dm\n", radius);
	printf("Volume: %.1fm^3\n", volume);
}