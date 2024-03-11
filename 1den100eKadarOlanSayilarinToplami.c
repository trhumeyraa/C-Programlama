#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, toplam=0;
    for (x=1; x<=100; x++)
    {
      toplam += x;
    }
    printf ("1den 100e kadar sayiarin toplami= %d ", toplam);

    fflush(stdin);
    getchar();

    return 0;

}
