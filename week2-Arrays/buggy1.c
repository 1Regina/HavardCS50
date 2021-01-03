#include <stdio.h>
#include <cs50.h>
int main(void)
{
    string name = get_string("What's your name?\n");
    printf("hello, %s\n",name);
}

// run these: 
// clang -o buggi buggy1.c -lcs50   for compiling
// ./buggi    for showing