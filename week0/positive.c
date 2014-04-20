#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        printf("I demand you give me a positive integer:");
        n = GetInt();
    }
    while (n <= 0);
    printf("Thanks for the %i!\n", n);
}
