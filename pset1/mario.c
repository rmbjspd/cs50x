# include <cs50.h>
# include <stdio.h>

int main(void)
{
    printf("Height:");
    int height = GetInt();
    while(height > 23 || height < 0)
    {
    printf("Height:");
    height = GetInt();
    }
    int floor = 1;
    while(height > 0)
        {
            int j = 0;
            for(int i = 1; i < height; i++)
            {
            printf(" ");
            }
            while(true)
            {
            printf("#");
            j++;
            if(j == floor)
            break;
            }
            j = 0;
            floor++;
            height--;
            printf("#\n");
        }
}
