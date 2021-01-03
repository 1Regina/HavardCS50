#include <stdio.h>
#include <cs50.h>
#include <ctype.h>  // for toupper
#include <string.h> // for strlen
#include <stdlib.h>

int main(void)
{
    // // negative demo of copy
    // string s = get_string ("s: "); //    char *s = get_string ("s: ");

    // // to make a copy of s 
    // string t = s;

    // t[0] = toupper(t[0]); // but output will capitalise both s and t bcos string is also char * meaning copying the address and capitalise value at the same address

    // printf("%s\n",s);
    // printf("%s\n",t);

    // positive demo of copy
    char *s = get_string ("s: ");
    
    char *t = malloc (strlen (s) + 1); // memory allocation . remember the \0
   
    // Original. Copy string into memory. 
    // for (int i = 0, n = strlen(s); i <= n; i++) // rem to + 1 bcos want to loop thru the terminator

    // {
    //     t[i] = s[i];
    // }

    // Progress1. Copy string into memory. 
    strcpy(t, s);

    // Capitalize copy
    t[0] = toupper(t[0]);

    // Print strings
    printf("s: %s\n",s);
    printf("t: %s\n",t);    


    // undo malloc by freeing memory

    free(t);
}

//  clang -o copy copy.c -lcs50
// ./copy