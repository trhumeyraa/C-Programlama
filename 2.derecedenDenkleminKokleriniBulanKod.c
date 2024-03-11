#include <stdio.h>
#include <stdlib.h>

int main()
{
    //ikinci dereceden denklemin köklerini bulma
    float a,b,c, x, x1,x2, delta, kokDelta;
    printf ("a, b, c degerlerini giriniz: ");
    scanf ("%f %f %f", &a, &b, &c);
    delta=b*b-4*a*c;
    if (delta>0){
        x1=(-b-sqrt(delta))/(2*a);
        x2=(-b+sqrt(delta))/(2*a);
        printf ("reel kokler: \b");
        printf ("\n x1=%f", x1);
        printf ("\n x2=%f", x2);
    }
    else if (delta<0) {
        kokDelta=(sqrt(-delta))/(2*a);
        x=-b/(2*a);
        printf ("karmasik kokler");
        printf ("\n x1=%f+(%f)*i", x, kokDelta);
        printf ("\n x2=%f-(%f)*i",x, kokDelta);
        }
        else {
            x=b/(2*a);
            printf ("\n kokler esit: ");
            printf ("\n x1=x2=%f", x);
        }
    }
