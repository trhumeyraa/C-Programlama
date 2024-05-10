#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi, faktoriyel;
    faktoriyel=1;

    printf ("sayi giriniz: ");
    scanf ("%d", &sayi);

    while (sayi>1)
    {
         faktoriyel=faktoriyel*sayi;
         sayi--;
    }
    printf ("sonuc: %d", faktoriyel);

}
