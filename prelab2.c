#include<stdio.h>

int main(void)

{
    int integerA = 0;
    int integerB = 0;
    int integerC = 0;
    int integerD = 0;

    printf("enter a value for each integer\nA= ");
    scanf("%d", &integerA);
    printf("B= ");
    scanf("%d", &integerB);
    printf("C= ");
    scanf("%d", &integerC);
    printf("D= ");
    scanf("%d", &integerD);
    printf("A= %d\n", integerA);
    printf("B= %d\n", integerB);
    printf("C= %d\n", integerC);
    printf("D= %d\n", integerD);

    int first = integerB + integerC;
    int second = integerA * integerD;
    int third = integerA / integerC;
    int fourth = integerC % integerD;
    int fifth = (integerA * integerC) / (integerB + integerD);

    printf("The calue of the sum of B and C is: ", first);
    printf("The value of the product of A and C is: ", second);
    printf("The value of the quotient of A and C is: ", third);
    printf("The value of the remainder of C divided by D is: ", fourth);
    printf("The quantity of the product of A and C divided by the quantity of the sum of B and D is: ", fifth);

}