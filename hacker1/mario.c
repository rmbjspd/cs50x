# include <cs50.h>
# include <stdio.h>

int main(void)
{
    printf("Height:");
    int height = GetInt();
    do
    {
        printf("Height:");
        height = GetInt();
    }
    while (height > 23 || height < 0);
    int floor = 1;
    while(height > 0)
    {
        // leading spaces
        for(int i = 1; i < height; i++)
        {
            printf(" ");
        }
        // left side of the pyramid
        int j;
        while(j < floor)
        {
            printf("#");
            j++;
        }
        j = 0;
        // gap
        printf("  ");      
        // right side of the pyramid
        int k;
        while(k < floor)
        {
            printf("#");
            k++;
        }
        k = 0;
        printf("#\n");
        // next floor
        floor++;
        height--;
        
    }
}
