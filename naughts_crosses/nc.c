#include <stdio.h>
#include <string.h>

void printboard(int board[])
{
	printf("[ ");
	int count0 = 0;
	while (count0 < 9){
		printf("%d ", board[count0]);
		count0 = count0 + 1;
	}
	printf("]\n");
}

int main()
{
	int board[9];
	memset(board, 0, sizeof(board));
	int check = 0;
	char * mode;
	while (check == 0)
	{
		printf("Computer or player moves first? Input (c/p):");
		scanf("%s", mode);
		if ( strncmp(mode, "p", strlen(mode)) == 0 )
		{
			printf("Player first\n");
			int pos = 0;
			int count = 0;
			while (count < 9)
			{
				do
				{
					printf("Select a move (0-9): ");
					scanf("%d", &pos);
				}
				while (board[pos] == 0);
				board[pos] = 1;

				printboard(board);

				count = count + 1;
			}

			check = 1;
		}
		else if ( strncmp(mode, "c", strlen(mode)) == 0 )
		{
			printf("Computer first\n");
			check = 1;
		}
	}


}
