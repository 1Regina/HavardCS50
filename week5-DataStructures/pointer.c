#include <stdio.h>

int main (void)
{
    // create pointer to an integer and call it x
    int *x;

    // create pointer to an integer and call it y
    int *y;

    // allocate memory of bytesize according to size of integer 4 byte. it will return the address of the 1st byte in a pointer call x
    x = malloc(sizeof(int));

    // go to the address of x and put 42 there
    *x = 42;

    y = x; 

    // go to the address of y and put 13 there but this means original 42 is overwritten by 13
    *y = 13; 
}