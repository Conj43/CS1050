//Connor Joyce (cpjtdx)
//Lab 9
//November 4, 2022
// FS 2022 CS1050H
#include<stdio.h>
void getstring(char * str)   // getting string
{
    printf("Enter a string: ");
    scanf("%s", str);
}
void printstring(char * a)   // printing the string
{
    printf("you entered: %s\n", a);
}
void stringlength(char * b, int * len)  // getting the string length into a variable
{
    int a = 0;
    for (int i = 0; i<512; i++)
    {
        if (*(b+i) == 0)
        {
            break;
        }
        else{
            a = a+1;
        }
    }
    *len = a; 
}

void split(char * a, char * b, char * c, int length)  // splits string using half of the length
{
    int half = 0;
    half = length/2;
    int count = 0;
    if ((length % 2) == 0)
    {
        
        for (int i = 0; i<half; i++)
        {
            *(a+i) = *(a+i);
        }
        for (int p = half; p<length; p++)
        {
            *(b+count) = *(a+p); 
            count++;
        }
        *(a+half) = 0;
    }
    else 
    {
        for (int i = 0; i<half; i++)
        {
            *(a+i) = *(a+i);
        }
        for (int p = (half+1); p<length; p++)
        {
            *(b+count) = *(a+p); 
            count++;
        }
        *(c) = *(a+half);
        *(a+half) = 0;
        
    }

    }
void reverseeven(char * a, char * b, int lena, int even)  // reverses function if its even ; i used a thing similar to bubble sort with a hold variable
{
    if ((even%2)==0 )
    {
        int hold;
        for (int i = 0; i<lena/2; i++)
        {
            hold = *(a+i);
            *(a+i) = *(a+lena-i-1);
            *(a+lena-i-1) = hold;
        }
        for (int i = 0; i<lena/2; i++)
        {
            hold = *(b+i);
            *(b+i) = *(b+lena-i-1);
            *(b+lena-i-1) = hold;
        }
        printf("your modified string is: ");
        for (int y = 0; y<lena; y++)
        {
            printf("%c", *(a+y));
        }
        for (int q = 0; q<lena; q++)
        {
            printf("%c", *(b+q));
        }
        printf("\n");
    }
    
}
void reverseodd(char * a, char * b, char * c, int lena, int odd) // reverses odd functions, again similar to bubble sort with hold variable
{
    if ((odd%2)!=0)
    {
        int hold;
        for (int i = 0; i<lena/2; i++)
        {
        
            hold = *(a+i);
            *(a+i) = *(a+lena-i-1);
            *(a+lena-i-1) = hold;
        }
        for (int i = 0; i<lena/2; i++)
        {
            hold = *(b+i);
            *(b+i) = *(b+lena-i-1);
            *(b+lena-i-1) = hold;
        }
        printf("your modified string is: ");
        for (int y = 0; y<lena; y++)
        {
            printf("%c", *(a+y));
        }
        printf("%s", c);
        for (int q = 0; q<lena; q++)
        {
            printf("%c", *(b+q));
        }
        printf("\n");
        }
    
}



int main(void)
{
    printf("*** Welcome to Lab 9! ***\n\n");
    char a[512];
    char b[512];
    char c[512];
    int p = 0;
    int * lena = 0;  // this is the pointer i used for the full length of string
    lena = &p;
    int z = 0;
    int * lenb = 0;   // this is the pointer i used to get half the length of the string, so it was equal to length of first and second segments, even if odd
    lenb = &z;
    getstring(a);
    printstring(a);
    stringlength(a, lena);

    split(a, b, c, p);
    stringlength(a, lenb);
    reverseeven(a, b, z, p);
    reverseodd(a, b, c, z, p);
    printf("\n*** Thank you for participating in Lab 9! ;) ***\n");


}