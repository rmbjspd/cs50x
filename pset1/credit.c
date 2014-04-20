# include <stdio.h>
# include <cs50.h>
# include <string.h>

int main(void)
{
    printf("Number:");
    int cardnum = GetInt();
    cardnum = (string) cardnum;
    int n = strlen(cardnum);
    int i = 0;
    int sum;
    while(i < n)
    {
        i++;
        sum = sum + cardnum[n - i];
        i--;
        i--;
    }
    
}



