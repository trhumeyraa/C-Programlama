#include <stdio.h>
#include <stdlib.h>

int main()
{
    int en, boy,i,j;


    printf ("dikdortgen olusturmak icin deger giriniz: \n");
    printf ("en: ");
    scanf ("%d",&en);

    printf ("boy: ");
    scanf ("%d",&boy);

    for (i=1; i<=boy; i++)
    {
        for (j=1; j<=en; j++)
        {
            printf ("*");
        }
        printf ("\n");
    }
}
