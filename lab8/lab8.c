//Connor Joyce(cpjtdx)
//October 21, 2022
//FS CS1050H
//Lab 8
#include <stdio.h>
void getIntArray(int * outputarray, int * count)
{
    
    printf("Enter the number on elements in the array:\n");
    scanf("%d", count);
    for (int f = 0; f<*count; f++)
    {
        
        printf("Element #%d: ", f+1);
        scanf("%d", &outputarray[f]);
        
    }
}
void PrintArray(int a[], const int size)
{
    
    printf("Here are the %d elements in your array!\n", size);
    for (int x = 0; x<size; x++)
    {
        printf("array[%d]= %d\n", x, a[x]);
    }
}
int TotalArray(int * array, int count)
{
    int sum = 0;
    for(int i = 0; i<count; i++)
    {
        
        sum = array[i]+sum;
    }
    return sum;
}
double AvgArray(int * array, int count)
{
    double sum = 0;
    double size = count;
    for(int i = 0; i<count; i++)
    {
        
        sum = array[i]+sum;
    }
    double avg = sum/size;
    return avg;
}
int sumofarrays(int *array1, int * array2, int count1, int count2)
{
    int sum1 = 0;
    for(int i = 0; i<count1; i++)
    {
        sum1 = array1[i]+sum1;
    }
    int sum2 = 0;
    for(int a = 0; a<count2; a++)
    {
        sum2 = array2[a]+sum2;
    }
    int totalsum = sum1+sum2;
    return totalsum;
}
double avgofarrays(int *array1, int * array2, int count1, int count2)
{
    double sum1 = 0;
    double size1 = count1;
    for(int i = 0; i<count1; i++)
    {
        sum1 = array1[i]+sum1;
    }
    double sum2 = 0;
    double size2 = count2;
    for(int a = 0; a<count2; a++)
    {
        sum2 = array2[a]+sum2;
    }
    double totalsum = sum1+sum2;
    double totalavg = totalsum/(size1+size2);
    return totalavg;

}
int main(void)
{
    printf("*********************************\n** Hello, Welcome to Lab 8 **\n*********************************\n");
    int i =0;
    int a[100];
    int b[100];
    int * p = 0;
    p = &i;
    int y = 0;
    int * t = 0;
    t = &y;
    getIntArray(a, p); 
    PrintArray(a, i);
    printf("Total of array = %d\n", TotalArray(a, i));
    printf("Average of array = %.3f\n", AvgArray(a, i));
    getIntArray(b, t);
    PrintArray(b, y);
    printf("Total of array 2 = %d\n", TotalArray(b, y));
    printf("Average of array 2 = %.3f\n", AvgArray(b, y));
    printf("\n\nTotal of array and array2 = %d\n", sumofarrays(a, b, i, y));
    printf("Average of array and array2 = %.3f\n", avgofarrays(a, b, i, y));
}