//Connor Joyce (cpjtdx)
//September 14, 2022
//Lab 7
//CS 1050H FS 22
#include <stdio.h>
void Print2DArray(int array[], int rows)
{
    for (int i = 0; i<rows; i++)
    {
        int col2;
        int col3;
        col2 = i+rows;
        col3 = i+(rows*2);
        int a = array[i];
        int b = array[col2];
        int c = array[col3];
        printf("row %d: %d  %d  %d\n", i, a, b, c);
    }
}

void PrintGrades(int array[], int rows)
{
        for (int i = 0; i<rows; i++)
    {
        
        
        int col2;
        int col3;
        col2 = i+rows;
        col3 = i+(rows*2);
        int a = array[i];
        int b = array[col2];
        int c = array[col3];
        char grades[5] = {'A', 'B', 'C', 'D', 'F'};
        char column;
        char column1;
        char column2;
        if (a>= 85)             // column 1
        {
            column = grades[0];
        }
            else if (a>=75)
            {
                column = grades[1];
            }
                else if (a>=60)
                {
                    column = grades[2];
                }
                    else if(a>=50)
                    {
                        column = grades[3];
                    }
                        else
                        {
                            column = grades[4];
                        }
                   
        if (b>=90)             // column 2
        {
            column1 = grades[0];
        }
            else if (b>=80)
            {
                column1 = grades[1];
            }
                else if (b>=70)
                {
                    column1 = grades[2];
                }
                    else if(b>=60)
                    {
                        column1 = grades[3];
                    }
                        else
                        {
                            column1 = grades[4];
                        }
           
        if (c>= 90)             // column 3
        {
            column2 = grades[0];
        }
            else if (c>=75)
            {
                column2 = grades[1];
            }
                else if (c>=55)
                {
                    column2 = grades[2];
                }
                    else if(c>=40)
                    {
                        column2 = grades[3];
                    }
                        else
                        {
                            column2 = grades[4];
                        }
     
        
        
        printf("Student %d: %c  %c  %c\n",i, column, column1 , column2);
    }
}
    

int main(void)
{
    int array[] = {72, 95, 93, 98, 99, 47, 97, 85, 96, 94, 98, 76, 68, 88, 97, 77, 92, 32, 99, 95, 91, 90, 98, 82, 62, 95, 86, 98, 90, 27, 75, 91, 99, 74, 90, 98};
    int curve[] = {85, 75, 60, 50, 90, 80, 70, 60, 90, 75, 55, 40};
    int rows;
    
    printf("Here are the scores: \n");
    Print2DArray(array, rows = 12);
    printf("\nHere are the cutoffs: \n");
    Print2DArray(curve, rows = 4);
    printf("\nHere are the grades: \n");
    PrintGrades(array, rows = 12);
    
    
}
