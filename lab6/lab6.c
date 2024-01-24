// Connor Joyce (cpjtdx)
// October 7, 2022
// Lab 6
// FS 2022 CS 1050H
#include <stdio.h>

int main(void)
{
    int array1[50];   // array 1
    
    int p = 1;
    int x = 1;
    int sum = 0;
    
    printf("Array 1: \n");
    for(int i = 0; i<50; i++)
    {
        
        array1[i] = p;  
        printf("array1[%d] = %d, ", i, array1[i]);
        p=p+2;
        if (x == i)
        {
            sum = array1[i]+sum;
            x = x+2;
        }
        
    }

    printf("the total sum of odd elements is = %d\n", sum);
    float transfer = sum;
    float avg = transfer/25;
    printf("average of odd elements = %.2lf\n", avg);       // end array 1
    
    int array2[50];   //array 2
    
    int u = 0;
    int sam = 0;
    int j = 0;
    printf("Array 2: \n");
    for(int a = 0; a<50; a++)
    {
        
        
        array2[a] = u;  
        printf("array2[%d] = %d, ", a, array2[a]);
        
        if (j == a)
        {
            sam = array2[a]+sam;
            j = j+2;
        }
        u=u+2;
    }
    printf("the total sum of even elements is = %d\n", sam);
    float trans = sam;
    float average = trans/25;
    printf("average of even elements = %.2lf\n", average);     // end array 2


    int product[50];
    int one[50];
    int two[50];
    int h = 1;
    int m = 0;
    int f = 0;
    
    for (int q = 0; q<50; q++)
    {
        product[q] = f;
        
        h = h+2;
        m = m+2;
        one[q] = h;
        two[q] = m;
        
        f = (one[q]*two[q]);
        
        printf("product[%d] = %d, ", q, product[q]);
        

    }
}