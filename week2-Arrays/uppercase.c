#include <cs50.h>
#include <stdio.h>
#include <string.h>
//progress1
#include <ctype.h> // to change to upper or lower

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        // original
        // if (s[i] >= 'a' && s[i] <= 'z')
        // {
        //     printf("%c", s[i]-32);// convert to uppercase
        // }
        // else
        // {
        //     printf("%c",s[i]);
        // }
        
        //progress1 to do above
        printf("%c", toupper(s[i]));
    }
    printf("\n");
}