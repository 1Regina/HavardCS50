#include <stdio.h>

void swap (int a, int b);

int main (void)
{
    int x = 1;
    int y = 2;

    printf ("x is %i, y is %i\n", x, y);
    swap(x , y);
    printf ("x is %i, y is %i\n", x, y);
}

void swap(int a , int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

// make noswap
// ./noswap

// fail bcos b is copies of a . Swap is getting only copies of x and y (ie a and b) to swap but it is swapping a and b and not x and y