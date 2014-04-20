#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    // check for command-line arguments
    if (argc != 2)
    {
        printf("Don't forget to include a value for the key!\n");
        return 1;
    }
    
    // check for invalid key values
    int vlen = strlen(argv[1]); 
    for (int i = 0; i < vlen; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            return 1;
            break;
        }
    }
    
    // get string input
    int k = atoi(argv[1]);
    string text = GetString();
    int textchars = strlen(text);
    
    // convert string input according to k
    for (int i = 0; i < textchars; i++)
    {
        int letter;  
        // preserve non-letter characters
        if (!isalpha(text[i]))
        {
            letter = text[i];
        }    
        else if (isupper(text[i]))
        {
            // capital letters
            letter = (text[i] + k - 65) % 26 + 65;
        }
        else
        {
            // lowercase letters
            letter = (text[i] + k - 97) % 26 + 97;
        }
        printf("%c", letter);
    }
    // for prettiness' sake
    printf("\n");
}
