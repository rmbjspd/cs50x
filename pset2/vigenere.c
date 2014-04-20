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
        printf("Don't forget to include one (and only one) keyword!\n");
        return 1;
    }
    
    // check for invalid key values
    int vlen = strlen(argv[1]); 
    for (int i = 0; i < vlen; i++)
    {
        if (!isalpha(argv[1][i]))
        {           
            printf("Please use only letters in your keyword. Please?\n");
            return 1;
        }
    }
    // convert keyword to appropriate values
    string k = argv[1];
    for (int i = 0, n = strlen(k); i < n; i++)
    {
        if (isupper(k[i]))
        {
            k[i] = k[i] - 65;
        }
        else
        {
            k[i] = k[i] - 97;
        }
    }
    string text = GetString();
    int textchars = strlen(text);
    // convert string input according to k
    for (int i = 0, j = 0; i < textchars; i++)
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
            letter = (text[i] + k[j] - 65) % 26 + 65;
            j++;
        }
        else
        {
            // lowercase letters
            letter = (text[i] + k[j] - 97) % 26 + 97;
            j++;
        }
        printf("%c", letter);
        
        // reset the keyword once end is reached
        if (j == vlen)
        {
            j = 0;
        }
    }
    // for prettiness' sake
    printf("\n");
}
