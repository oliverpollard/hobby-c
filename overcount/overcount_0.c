#include <stdio.h>
#include <cs50.h>

/* Prototype declarations */

int FileLength (FILE* file, char array[128]);

/* File pointer declarations */

FILE* id;
FILE* quantity;
FILE* count;

int main(void)
{
	/* Open source files for data */

	id = fopen("id.txt", "r");
	quantity = fopen("quantity.txt", "r");
	count = fopen("count.txt", "r");

	/* Check files have loaded sucessfully */

	if (id == NULL || quantity == NULL || count == NULL)
	{
		printf("ERROR: Source files cannot be found\n");
		exit(1);
	}

	/* check each file contains the same number of lines */

	char disposable[128];
	int lines_check_1 = FileLength (id, disposable);
	int lines_check_2 = FileLength (quantity, disposable);
	int lines_check_3 = FileLength (count, disposable);

	if (lines_check_1 != lines_check_2 || lines_check_1 != lines_check_3)
	{
		printf("ERROR: Number of data points differ in each source");
		exit(1);
	}
	
	int lines = lines_check_1
	/* Place data in arrays */
	
	char product_id[128];
	char product_quantity[128];
	char product_count[128];

	char product_id_array[lines];
	char product_quantity_array[lines];
	char product_count_array[lines];


	for (int k = 0; fgets(product_id, 8, id); k++)
	{
		product_id_array[k] = product_id;
	}
	for (int k = 0; fgets(product_quantity, 8, quantity); k++)
	{
		product_quantity_array[k] = product_quantity;
	}
	for (int k = 0; fgets(product_count, 8, count); k++)
	{
		product_count_array[k] = product_count;
	}
}

int FileLength (FILE* file, char array[128])
{
	int j = 0;
	while (fgets(array, 128, file) != NULL)
	{
		j++;
	}

	return j;

}