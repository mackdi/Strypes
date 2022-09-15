#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // променлива за числата в масива
    int number = 1;

    //спомагателни променливи
    int start_row = 0; // начало на реда
    int start_col = 0; // начало на колоната
    int end_col = 5;   // край на колоната
    int end_row = 5;   // край на реда

    //деклариране на масива
    int a[end_col][end_row];

    
    while (start_row < end_row && start_col < end_col)
    {
        // попълва първият ред до остатъка от end_col
        for (int i = start_col; i < end_col; ++i)
        {
            a[start_row][i] = number++;
        }
        start_row++;

        // попълва послената колона до остатъка на end_row
        for (int i = start_row; i < end_row; ++i)
        {
            a[i][end_col - 1] = number++;
        }
        end_col--; 

        // попълва последният ред 
        if (start_row < end_row)
        {
            for (int i = end_col - 1; i >= start_col; --i)
            {
                a[end_row - 1][i] = number++;
            }
            end_row--;
        }

        //попълва първата колона
        if (start_col < end_col)
        {
            for (int i = end_row - 1; i >= start_row; --i)
            {
                a[i][start_col] = number++;
            }
            start_col++;
        }
    }

    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
