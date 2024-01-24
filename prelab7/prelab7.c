#include <stdio.h>
void Print2DArray(int array[], int rows)
{
    for (int i = 0; i<rows; i++)
    {
        int col2;
        int col3;
        col2 = i+12;
        col3 = i+24;
        int a = array[i];
        int b = array[col2];
        int c = array[col3];
        printf("row %d: %d  %d  %d\n", i, a, b, c);
    }
    
}
float PrintRowAverage(int array[], int q)
{

    
        int col2;
        int col3;
        col2 = q+12;
        col3 = q+24;
        int a = array[q];
        int b = array[col2];
        int c = array[col3];
        float sum = a+b+c;
        float avgrow = sum/3;
        return avgrow;
    return 0;
}
float PrintColAverage(int array[], int z)
{
    float colsum = 0;
    if (z == 0)
    {
        for (int g = 0; g<12; g++)
        {
            colsum = colsum + array[g];
        }
    }
    if (z == 1)
    {
        for (int g = 12; g<24; g++)
        {
            colsum = colsum + array[g];
        }
    }
    if (z == 2)
    {
        for (int g = 24; g<36; g++)
        {
            colsum = colsum + array[g];
        }
    }

    float colavg = colsum/12;
    return colavg;
        
    return 0;
}


int main(void)
{
    int array[] = {72, 95, 93, 98, 99, 47, 97, 85, 96, 94, 98, 76, 68, 88, 97, 77, 92, 32, 99, 95, 91, 90, 98, 82, 62, 95, 86, 98, 90, 27, 85, 91, 99, 85, 90, 98};
    int rows = 12;
    int columns = 3;

    Print2DArray(array, rows);
    printf("here are the averages for the rows: \n");
    for (int q = 0; q<rows; q++)
    {
    printf("average of row %d: %.5f\n", q, PrintRowAverage(array, q));
    }
    printf("here are the averages of the columns: \n");
    for (int z = 0; z<columns; z++)
    {
        printf("average of column %d: %.5f\n", z, PrintColAverage(array, z));
    }
}