#include <cs50.h> // rem to use clang -o string string.c -lcs50  to link to cs50 code for get_string. Short cut make string
#include <stdio.h>

int main (void)
{
    string answer = get_string("Whats your name?\n");
    printf("hello, %s\n", answer);
}

