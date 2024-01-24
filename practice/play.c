#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char * argv[])
{
    char * count[256];
    int j = 0;
    if(argc >1)
    {
    for (int i = 0; i<argc; i++)
    {
        count[j] = argv[i];
        j++;
    }
    }
    for (int p = 0; p<argc; p++)
    {
    printf("%s\n", count[p]);
    }
}