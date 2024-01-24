#include <stdio.h>
int main(void)
{
    int a[] = {1, 2, 3, 4, 5};
    int * p= &a[0];
        
    printf("address of a is %p\n", (void*)p++);
    printf("address of a is %p\n", (void*)p);
}