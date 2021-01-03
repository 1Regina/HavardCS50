#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    // original    
    // int list[3];

    // // progress1
    // int *list = malloc(3 * sizeof(int));
    // if (list == NULL)
    // {
    //     return 1;
    // }

    // list[0] = 1;
    // list[1] = 2;
    // list[2] = 3;

    // int *tmp = malloc(4 * sizeof(int));
    // if (tmp == NULL)
    // {
    //     return 1;
    // }

    // // Copy integers from old array into new array
    // for (int i = 0; i < 3; i ++)
    // {
    //     tmp[i] = list[i];
    // }
 
    // tmp[3] = 4;

    // // free up memory. just need to indicate the first and it will clear the whole chunk
    // free (list);

    // list = tmp;

    // realloc takes existing chunk of memory and resizes the memory allocation ; handles the copy of data from old to new. just check for null and handle new value
    int *tmp = realloc(list, 4 * sizeof(int));
    if (tmp == NULL)
    {
        return 1;
    }

    free (list);

    list = tmp;
    
    temp[3] = 4;

    for (int i = 0; i < 4; i ++)
    {
        printf("%i\n", list[i]);
    }
    
    // free list
    free (list);
}

// make list
// ./list