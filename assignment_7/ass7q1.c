/*Write a function to accept a 2-D array from the user. Write another function to print the 2-D
array. Re-use these functions in rest of the assignments wherever required*/

#include <stdio.h>
#include <stdlib.h>

void acceptArray(int rows, int cols, int array[rows][cols]);
void printArray(int rows, int cols, int array[rows][cols]);

int main()
{
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int array[rows][cols];

    acceptArray(rows, cols, array);

    printArray(rows, cols, array);

    return 0;
	}

void acceptArray(int rows, int cols, int array[rows][cols]) 
{
    printf("Enter the elements of the %d x %d array:\n", rows, cols);

	for (int i = 0; i < rows; i++) {
    
		for (int j = 0; j < cols; j++) {
        
			printf("Element [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
      }
	}


void printArray(int rows, int cols, int array[rows][cols])
{
	printf("The %d x %d array is:\n", rows, cols);
    
		for (int i = 0; i < rows; i++) {
        
			for (int j = 0; j < cols; j++) {
            
				printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}
