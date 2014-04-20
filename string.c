#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("Please give me a string:");
    string s = GetString();
    for (int i = 0, n = strlen (s); i < n; i++)
    {
        printf("%c\n", s[i]);
    }
}
