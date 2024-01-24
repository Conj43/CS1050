/*****************************************************************************
 * Prelab 11
 * CS1050
 * FS 2022
 *****************************************************************************/
#include <stdio.h>
#include <string.h>

typedef struct _Movie
{
	char title[256];
	long gross;
	int year;
} Movie;
void bubblesort(Movie movies[])
{
    Movie hold;
    for (int i = 0; i<14; i++)
    {
        for (int p = 0; p<14-i; p++)
        {
            if (strcmp(movies[p].title, movies[p+1].title) > 0)
            {
                hold = movies[p];
                movies[p] = movies[p+1];
                movies[p+1] = hold;
            }
        }
    }
}
void printgross(Movie movies[])
{
    printf("Highest grossing movies:\n");
    printf("                       Title          Gross    Year\n");
    printf("---------------------------------------------------\n");
    for (int i = 0; i<15; i++)
    {
        printf("%28s   %12ld   %5d\n", movies[i].title, movies[i].gross, movies[i].year);
    }
}
void printalphabetical(Movie movies[])
{
    printf("\n\nMovies in Alphabetical Order:\n");
    printf("                       Title          Gross    Year\n");
    printf("---------------------------------------------------\n");
    for (int p = 0; p<15; p++)
    {
        printf("%28s   %12ld   %5d\n", movies[p].title, movies[p].gross, movies[p].year);
    }
}
int main(void)
{
    Movie movies[] = 
    {
        {"Gone_with_the_Wind", 3713000000, 1939},
        {"Avatar", 3263000000, 2009},
        {"Titanic", 3087000000, 1997},
        {"Star_Wars", 3049000000, 1977},
        {"Avengers:_Endgame", 2798000000, 2019},
        {"The_Sound_of_Music", 2554000000, 1965},
        {"E.T._the_Extra-Terrestrial", 2493000000, 1982},
        {"The_Ten_Commandments", 2361000000, 1956},
        {"Doctor_Zhivago", 2238000000, 1965},
        {"Star_Wars:_The_Force_Awakens", 2206000000, 2015},
        {"Snow_White", 2150000000, 1937},
        {"Jurassic_Park", 2100000000, 1993},
        {"Jaws", 2100000000, 1975},
        {"Avengers:_Infinity_War", 2050000000, 2018},
        {"The_Exorcist", 2000000000, 1973},
    };
    

    printgross(movies);
    bubblesort(movies);
    printalphabetical(movies);
}

