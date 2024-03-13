#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r;
    float alan, pi;
    pi=3.14;

    printf ("bir deger girin: ");
    scanf ("%d", &r);

    alan=pi*pow(2,r);

    printf ("sonuc: %f", alan);

}

