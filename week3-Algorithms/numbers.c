#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //original
    // int numbers[6];
    // numbers[0] = 4;
    // numbers[1] = 8;
    // numbers[2] = 15;
    // numbers...etc

    //progress1 if know all the elements
    int numbers [6] = {4,8,15,16,23,42};
    
    for (int i = 0; i < 6; i++)
    {
        if (numbers[i] == 50)
        {
            printf("Found\n");
        }
    }
    printf("Not found\n");
}