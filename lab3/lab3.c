// Connor Joyce
// Cpjtdx
// Lab 3
// September 9, 2022
// Comp Sco 1050H
// FS 22




#include <stdio.h>
int main(void)
{

    int pick = 0;
    printf("Type -1 to start at 100 or 1 to start at 1: ");
    scanf("%d", &pick);

    if (pick == -1){
        int counter = 100;
        while (counter >= 2) {
            if (counter % 3 == 0 && counter % 7==0)
                printf("TS");
            else if (counter % 3 ==0)
                printf("T");
            else if (counter % 7 == 0)
                printf("S");
            printf("%d ", counter);
            counter = counter-2;}
    }else{
        int counter = 2;
        while (counter <= 100) {
            if (counter % 3 == 0 && counter % 7 == 0)
                printf("TS");
            else if (counter % 3 == 0)
                printf("T");
            else if (counter % 7 == 0)
                printf("S");
            printf("%d ", counter);
            counter = counter+2;
}
    }



}

