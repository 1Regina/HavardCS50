#include <stdio.h>
#include <cs50.h>

// const int N = 3; // bcos of progress3

float average(int length, int array[]); // otherwise it is at the bottom after main and main wont know what to do with the declaration in main.

int main(void)
{
    // original
    // int score1 = 72;
    // int score2 = 73;
    // int score3 = 33;

    // printf("Average: %i\n", (score1 + score2 + score3) / 3);

    // progress1
    // int scores[3];
    // scores[0] = 72;
    // scores[1] = 73;
    // scores[2] = 33;    
    // printf("Average: %i\n", (scores[0] + scores[1] + scores[2]) / 3);

    // progress2
    // int n = 3
    // int scores[n];
    // scores[0] = 72;
    // scores[1] = 73;
    // scores[2] = 33;    
    // printf("Average: %i\n", (scores[0] + scores[1] + scores[2]) / n);

    // // progress3
    // // int n = 3 // move to the top as global variable with capital
    // int scores[N];
    // scores[0] = 72;
    // scores[1] = 73;
    // scores[2] = 33;    
    // printf("Average: %i\n", (scores[0] + scores[1] + scores[2]) / N);


    // progress4
    int n = get_int("Number of scores: ");

    int scores[n];

    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("Score: ");
    }
    // printf("Average: %f\n", average(n, scores)); // but will run into error bcos in progress4, the average function is after this line

    printf("Average: %.1f\n", average(n, scores));// same as above but with rounding to 1 dec 
}

// progress4
float average(int length, int array[]) // average is a float. Length is necessary bcos C doesnt rem its own length
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        // sum = sum + array[i]; 
        sum += array[i];
    }
    // return sum / length;
    return (float) sum / (float)length; // to return as decimal. actually 1 float is enough as int and float -- float is the stronger but here 2 float for demo
}

// clang -o score scores.c -lcs50 or make scores
// ./score