#include <stdio.h>

int main(void)
{
    int c[20];
    c[0]=1;
    int sum = 0;
    
    for(int i = 0; i<20; i++)
    {
        c[i] = i+1;
    }
    for (int i=0; i<20; i++)
    {
        printf("c[%d] = %d\n", i, c[i]);
        sum = c[i]+sum;
        
    }
    printf("the total sum is = %d\n", sum);
    float transfer = sum;
    float avg = transfer/20;
    printf("average = %.2lf\n", avg);
}