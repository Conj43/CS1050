#include <stdio.h>
int main(void)
{
    int limit = 299;
    for (int i=1; i<=limit; i++){
        int hundreds = i/100;
        int tens = i/10- hundreds*10;
        int ones = i - hundreds*100 - tens*10;
        switch (hundreds){
            case 0:
                break;
            case 1:
                printf("One Hundred ");
                break;
            case 2:
                printf("Two Hundred ");
                break;
        }
        switch(tens){
            case 0:
                break;
            case 2:
                printf("Twenty ");
                break;
            case 3:
                printf("thirty ");
                break;
            case 4:
                printf("fourty ");
                break;
            case 5:
                printf("fifty ");
                break;
            case 6:
                printf("sixty ");
                break;
            case 7:
                printf("seventy ");
                break;
            case 8:
                printf("eighty ");
                break;
            case 9:
                printf("ninety ");
                break;
        }
        switch(ones){
            case 0:
                tens ==1 ? printf("ten, ") : printf(", ");
                break;
            case 1:
                tens ==1 ? printf("eleven, ") : printf("one, ");
                break;
            case 2:
                tens ==1 ? printf("twelve, ") : printf("two, ");
                break;
            case 3:
                tens ==1 ? printf("thirteen, ") : printf("three, ");
                break;
            case 4:
                tens ==1 ? printf("fourteen, ") : printf("four, ");
                break;
            case 5:
                tens ==1 ? printf("fifteen, ") : printf("five, ");
                break;
            case 6:
                tens ==1 ? printf("sixteen, ") : printf("six, ");
                break;
            case 7:
                tens ==1 ? printf("seventeen, ") : printf("seven, ");
                break;
            case 8:
                tens ==1 ? printf("eighteen, ") : printf("eight, ");
                break;
            case 9:
                tens ==1 ? printf("nineteen, ") : printf("nine, ");
                break;
        }
    }
}