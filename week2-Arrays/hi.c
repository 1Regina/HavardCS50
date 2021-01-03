#include <stdio.h>

int main(void)
{
    char c1 = 'H'; // char has 1 quote ' '
    char c2 = 'I';
    char c3 = '!';
    printf("%c %c %c\n", c1, c2, c3); // gives H I !
    // printf("%i %i %i\n",(int) c1, (int) c2, (int) c3);  // gives 72 73 33
    printf("%i %i %i\n", c1,  c2, c3);  // also gives 72 73 33
}

// clang -o hi hi.c -lcs50 or make hi
//  ./hi