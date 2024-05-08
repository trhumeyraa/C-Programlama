#include <stdio.h>
#include <stdlib.h>

int main()
{
    int intType;
    float floatType;
    double doubleType;
    char charType;

    //size of evaluates the size of a veriable
    printf("size of int: %d bytes \n" , sizeof (intType));
    printf("size of float: %zu bytes \n" , sizeof (floatType));
    printf("size of double: %zu bytes \n" , sizeof (doubleType));
    printf("size of char: %d byte \n" , sizeof (charType));


    return 0;
}
