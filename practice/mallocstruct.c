#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct _My
{
    int x;
    int y;
    char description[256];
};
typedef struct _My My;
typedef My * PMy;
void PrintMy(My my)
{
    printf("x=%d, y=%d, description=%s\n",my.x,my.y,my.description);
}
void PrintMyArray(My array[],int size)
{
    for (int i=0;i<size;i++)
    {
        PrintMy(array[i]);
    }
}
My * CreateMyArray(int size)
{
    My * p;
    p=malloc(sizeof(My)*size);
    for (int i=0;i<size;i++)
    {
        p[i].x = 10;
        p[i].y = 20;
        strcpy(p[i].description,"*********");
    }
    return p;
}
int main(int argc, char * argv[])
{
    //PMy p = malloc(sizeof(My)*20);
    int count = 2;  //default
    if (argc>1)
    {
        count = atoi(argv[1]);
    }
    PMy p = CreateMyArray(count);
    PrintMyArray(p,count);
    free(p);
}