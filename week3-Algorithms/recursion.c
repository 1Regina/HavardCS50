#include <cs50.h>
#include <stdio.h>

void draw(int h); // so it knows there is this fn below

int main (void)
{
    int height = get_int("Height: ");

    draw(height);
}

void draw(int h)
{
    // If nothing to draw
    if (h==0) 
    {
        return;
    }

    draw(h-1);

    for (int i = 0; i <h; i++)
    {
        printf("#");
    }
    printf("\n");
}