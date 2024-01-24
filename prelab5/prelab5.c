#include<stdio.h>
#include<math.h>
long factorial(int n)
{
    long result = 1;
    for (int i = n; i>1; i--)
    {
        result *=i;
    }
    return result;
}
int main(void)
{
    long n = 1;
    double y = 1;
    while (n<=50)
    {
        double z = factorial(n);
        double x = (1)/z;
        
        y = y+x;
        n++;
    }
    
    

    printf("e = %.10lf\n", y);
    for (int p=1; p<=5; p++)
    {
        printf("e to the %d power = %.3lf\n", p, pow(y, p));
    }
    
}