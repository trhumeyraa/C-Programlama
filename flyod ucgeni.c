#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, rows, counter;

    printf ("enter the number of rows of floyd's triangle\n ");
    scanf ("%d",&rows);
    printf ("*************************\n");

    for(counter = 1, i = 1; i <= rows; i++) {

        for (j=1; j <= i ; j++) {
            printf ("%3d", counter++);
        }
        printf ("\n");

    }

getch ();
return 0;

}
