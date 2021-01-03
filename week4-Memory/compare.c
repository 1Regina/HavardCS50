#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // compare integers
    // int i = get_int("i: ");
    // int j = get_int("j: ");

    // if (i == j)

    // compare string but note results that same string will always show "Different" bcos s and t are stored in diff memory location. This is technically comparing addresses
    // string s = get_string("s: ");   //same as char *s = get_string("s: "); if there is no <cs50.h>
    // string t = get_string("t: ");   //same as char *t = get_string("t: "); if there is no <cs50.h>

    // if (s == t)

    // compare results
    // {
    //     printf("Same\n");
    // }
    // else
    // {
    //     printf("Different\n");
    // }

     
    char *s = get_string("s: ");
    char *t = get_string("t: ");   

    printf("%p\n",s);
    printf("%p\n",t);

}

// clang -o compare compare.c -lcs50
// ./compare