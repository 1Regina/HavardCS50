#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv [])
{
    if (argc != 2) // 2 bcos the one that is untyped is the first such that what i type is the second ie argv[1]
    {
        printf("missing command-line argument\n");
        return 1;
    }
    printf("hello, %s\n", argv[1]);
    return 0;
}

// make exit
// ./exit David