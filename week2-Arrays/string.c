#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Input:  ");
    printf("Output:  ");
    // original
    // for (int i =0; s[i] != '\0'; i++)
    // progress 1
    // int n = strlen(s);
    // progress 2
    for (int i =0, n = strlen(s); i < n; i++)
    {
        printf("%c",s[i]);
    }
    printf("\n");
}

//  clang -o string string.c -lcs50