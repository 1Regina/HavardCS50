#include <stdio.h>
// #include <cs50.h> // if having string "EMMA" but can rid it if gg to char. see progress5

int main(void)
{
    int n = 50;

    // progress3    
    int *p = &n; // pointer to an int bcos need to specify the datatype of the value it is pointing at; create p to store address of n. & is for address. %p is for (address) pointer so int *p means address of an int.



    // Original
    // printf("%i\n", n);    

    // Progress1 to show address (or aka pointer) of n = 50 address in hexadecimal
    printf("%p\n", &n);

    // Progress2 to go to the address to show the value at that address with * ie * means go to the address
    printf("%i\n", *&n);

    // Progress3 print the value at the address
    printf("%i\n", *p);

    // // Progress4 print Emma
    // string s = "EMMA";
    // printf("%s\n", s);

    // Progress5
    char *s = "EMMA";
    printf("%p\n",s);     // show the address of string "EMMA". Note that string knows where to end bcos it has a terminator at the end of string
    printf("%p\n",&s[0]); // show the address of first char of "EMMA"
    printf("%p\n",&s[1]); // show the address of second char of "EMMA"
    printf("%p\n",&s[2]); // show the address of third char of "EMMA"
    printf("%p\n",&s[3]); // show the address of fourth char of "EMMA"    
    printf("%c\n",*s); // since s is the address going to address with *s will give the 1st char
    printf("%c\n",*(s+1)); // since s is the address going to address with *(s+1) will give the 2nd char    
    printf("%c\n",*(s+2)); // since s is the address going to address with *(s+2) will give the 3rd char    
    printf("%c\n",*(s+3)); // since s is the address going to address with *(s+3) will give the 4th char    

    printf("%s\n", s); // print entire string until the terminator 
}

// make address
// ./address