#include <stdio.h>
#include <stdlib.h>

int main()
{
    //iki sayýnýn ebobunu ve ekokunu hesaplama
    int sayi1, sayi2, i;
    printf ("sayi1=");
    scanf ("%d",&sayi1);

    printf ("sayi2=");
    scanf ("%d",&sayi2);

    int ebob=1;
    for (i=1; i<=sayi1 && i <=sayi2; i++) {
        if (sayi1%i==0 && sayi2%i==0)
            ebob=i;
    }
    int ekok=(sayi1*sayi2)/ebob;
    printf ("\n ebob=%d \n", ebob);
    printf ("ekok=%d \n", ekok);

    return 0;
}
