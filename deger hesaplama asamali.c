#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char c=17;
    c= c + (c<<1);
    c= c + (c<<2);
    c= c - (c<<3);

    printf ("%d", (int)c);
}
