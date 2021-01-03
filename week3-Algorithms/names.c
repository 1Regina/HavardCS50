#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[4] = {"EMMA","RODRIGO","BRIAN","DAVID"};

    for (int i = 0; i < 4; i ++)
    {
        // if (names[i] == "ENNA")// in c cannot compare string unless char by char

        // progress 1. compare string function. 0 if same
        if (strcmp(names[i], "EMMA") == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");    
    return 1;
}

// make names