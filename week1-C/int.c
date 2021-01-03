#include<cs50.h> // rem to use clang -o int int.c -lcs50  to link to cs50 code for get_int. Short cut make int
#include<stdio.h>

int main(void)
{
    int age = get_int("Whats your age?\n");
    // int days = age*365;
    // printf("You are at least %i days old.\n", days);
    printf("You are at least %i days old.\n", age*365);
}