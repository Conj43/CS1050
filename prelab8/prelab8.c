#include <stdio.h>
void getcount(int * outputint)
{
    
    printf("How many integers would you like to enter?\n");
    scanf("%d", outputint);
    
    
}
void GetIntegerArray( int * array,  const int count)
{
    for (int f = 0; f<count; f++)
    {
        
        printf("number %d: ", f+1);
        scanf("%d", &array[f]);
        
    }
}

void PrintArray(int a[], const int size)
{
    
    printf("You entered an array with %d elements!\n", size);
    for (int x = 0; x<size; x++)
    {
        printf("array[%d]= %d\n", x, a[x]);
    }
}

int main(void)
{
    printf("*********************************\n** Hello, Welcome to Pre-lab 8 **\n*********************************\n");
    int i =0;
    int * p = 0;
    p = &i;
    getcount(p); 
    int a[100];
    GetIntegerArray(a, i);
    PrintArray(a, i);
    
}
