#include <cs50.h>
#include <stdio.h>
#include <string.h>

// progress 1
typedef struct  // intro our own datatype. struct is a container with multi datatype
{
    string name;
    string number;
}
person;


int main(void)
{
    // progress1
    person people[4];// people is the array of 4 elements and each element is a person type
    people[0].name = "EMMA";
    people[0].number = "617-555-0100";

    people[1].name = "RODRIGO";
    people[1].number = "617-555-0101";

    people[2].name = "BRIAN";
    people[2].number = "617-555-0102";

    people[3].name = "DAVID";
    people[3].number = "617-555-0103";

    for (int i = 0; i <4; i++)
    {
        if (strcmp(people[i].name,"EMMA") == 0)
        {
            printf("%s\n", people[i].number);
            return 0;
        }

    // original
    // string names [4] = {"EMMA", "RODRIGO", "BRIAN", "DAVID"};
    // // using string instead of integers for numbers becos may have 0 which gets drop off or "-"
    // string numbers [4] = {"617-555-0100","617-555-0101","617-555-002","617-555-003"};

    // for (int i = 0; i <4; i++)
    // {
    //     if (strcmp(names[i],"EMMA") == 0)
    //     {
    //         printf("%s\n", numbers[i]);
    //         return 0;
    //     }
    }
    printf("Not found\n");
    return 1;
}

// make phonebook
// ./phonebook