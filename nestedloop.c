#include <stdio.h>

int main()
{
    //nested loop = loop inside a loop

    int rows;
    int columns;
    char symbol;

    printf("\nEnter no of rows: ");
    scanf("%d", &rows);

    printf("\nEnter no of columns: ");
    scanf("%d", &columns);

    scanf("%c"); // to get rid of new line character: \n

    printf("Enter a symbol to use: ");
    scanf("%c", &symbol);
    
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= columns; j++)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;
}