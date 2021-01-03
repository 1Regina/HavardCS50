#include <stdio.h>

int main(void)
{
    for (int i = 0; i <10; i++)
    {
        printf("i is now %i: ",i);   // if want to show the index number of each #
        printf("#\n");
    }
}

// clang -o buggi buggy2.c -lcs50
//  ./buggi

// consider debug50