// CMP_SC 1050 
// FS 2022 
// Lab 2 
// By Connor Joyce (cpjtdx) 
// September 2, 2022 

#include<stdio.h>

int main(void)
{
	int X = 0;
	int Y = 0;



	printf("enter an integer for X: ");
	scanf("%d", &X);
	printf("enter an integer for Y: ");
	scanf("%d", &Y);
	printf("X: %d\n", X);
	printf("Y: %d\n", Y);

	int prod = 0;
	prod = X * Y;
	int quo = 0;
	quo = X / Y;
	int eq = 0;
	eq = (X+1)*(Y);
	int rem = 0;
	rem = X % Y;
	int lol = 0;
	lol = (Y+1)%X;

	printf("X times Y = %d\n", prod);
	printf("X divided by Y = %d\n", quo);
	printf("X plus 1 quantity times Y = %d\n", eq);
	printf("X: %d\n", X);
	printf("Y: %d\n", Y);
	printf("remainder of X divided by Y = %d\n", rem);
	printf("remainder of Y plus 1 quantity divided by X = %d\n", lol);


}

