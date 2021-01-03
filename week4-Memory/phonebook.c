#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    // open file
    FILE *file = fopen("phonebook.csv", "a");

    // Get name and number from user
    char *name = get_string("Name: ");
    char *number = get_string("Number: ");

    // Print (write) strings to file
    fprintf(file, "%s,%s\n", name, number);

    // Close file
    fclose(file);
}