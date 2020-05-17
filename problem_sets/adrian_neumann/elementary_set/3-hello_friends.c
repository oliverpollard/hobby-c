#include <stdio.h>
#include <string.h>

int main()
{
	char * name;
	char * friend1 = "Alice";
	char * friend2 = "Bob";

	printf("Please enter your name: ");
	scanf("%s", name);

	if ( strncmp(name,friend1,strlen(name)) == 0 || strncmp(name,friend2,strlen(name)) == 0)
	{
		printf("Hello %s, welcome back!\n", name);
	}
	else
	{
		printf("Sorry %s, you're not known here.\n", name);
	}
	
	return 0;
}