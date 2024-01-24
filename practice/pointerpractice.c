#include<stdio.h>
int main(void)
{
    
    int array[5] = {1, 2, 3, 4, 5};
    int (*h)[5];
    h = &array;
    printf("the value is %d", *h[3]);
}