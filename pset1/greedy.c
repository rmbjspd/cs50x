# include <cs50.h>
# include <stdio.h>
# include <math.h>

int main(void)
{
printf("Hello there. How much change is owed?\n");
float total = GetFloat();
while(total < 0)
    {
    printf("Hello there. How much change is owed?\n");
    total = GetFloat();
    }
int change = round(total * 100);
int coins = 0;
while(change >= 25)
    {
    change = change - 25;
    coins++;
    }
while(change >= 10)
    {
    change = change - 10;
    coins++;
    }
while(change >= 5)
    {
    change = change - 5;
    coins++;
    }
while(change >= 1)
    {
    change = change - 1;
    coins++;
    }
printf("%i\n",coins);
}
