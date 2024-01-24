#include <stdio.h>

void getstring(char * str)
{
    printf("Enter a string: ");
    scanf("%s", str);
}
void printstring(char * a)
{
    printf("you entered: %s\n", a);
}

void stringlength(char * b, int * len)
{
    int a = 0;
    for (int i = 0; i<256; i++)
    {
        if (b[i] == 0)
        {
            break;
        }
        else{
            a = a+1;
        }
    }
    printf("your string has %d characters\n", a);
    *len = a; 
}
void reverse(char * a, int length)
{
    int hold;
    for (int i = 0; i<length/2; i++)
    {
        hold = a[i];
        a[i] = a[length-i-1];
        a[length-i-1] = hold;
    }

    for (int z = 0; z<length; z++)
    {
        printf("%c", a[z]);
    }
    printf("\n");
    printf("length of reverse string is %d\n", length);
}

int main(void)
{
    printf("***************************\n");
    printf("*** Welcome to prelab 9 ***\n");
    printf("***************************\n");
    char string[256];
    int p = 0;
    int * len = 0;
    len = &p;
    getstring(string);
    printstring(string);
    stringlength(string, len);
    reverse(string, p);
    printf("\nThank you for participating in prelab 9!! ;)\n");
}