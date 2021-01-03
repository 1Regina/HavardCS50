#include <stdio.h>

void swap (int a, int b);

int main (void)
{
    int x = 1;
    int y = 2;

    printf ("x is %i, y is %i\n", x, y);
    swap(&x , &y);
    printf ("x is %i, y is %i\n", x, y);
}

void swap(int *a , int *b) 
{
    int tmp = *a; //rem * means go to the address in a and store in tmp the number 1
    *a = *b; // go to the address in b and follow the address in a and put 2 in x
    b = tmp; // go to the address in b and change it to b
}


// make swap
// ./swap