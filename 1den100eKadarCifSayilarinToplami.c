#include <stdio.h>
#include <conio.h>

int main()
{
    int x, toplam=0;
    for (x=0; x<=100; x=x+2)
    if(x %2==0)
    {
      toplam += +x;
    }
    printf ("1den 100e kadar olan cift sayiarin toplami:%d ", toplam);

    fflush(stdin);
    getchar();

    return 0;
}
