// Connor Joyce Cpjtdx
// September 30, 2022
// Lab 5
// CS 1050H FS 22
#include<stdio.h>
#include<math.h>
int summation(int n, int m)
{
    
    int y = 0;
    int p = 0;
    int t = 0;
    int i = n;
    for (t = m; t<=i; t++)
    {
    y = pow(t, 2);
    p = y+p;

    }
    return p;
    
}
int main(void)
{
    int n = 0;

    int m = -5;
        while (m < 6)
    {
        ++n;
        if (n == 6)
        {
            n=1;
            m++;
        }
        
        if (m >= 6)
        {
            break;
        }
        printf("summation of %d through %d squared is: %d\n", m, n, summation(n, m));
    }

    

}