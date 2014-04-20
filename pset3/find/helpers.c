/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>
#include <stdio.h>
#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */

// global variable required to pass between functions. 
// TODO: figure out a way not to do it like this. 
int found = 0;
void recursivesearch(int a, int b[], int first, int last)
{
    int middle = (first + last) / 2;
    if (first == last)
    {
        if (b[first] == a)
        {
            found = 1;
        }
        else 
        {
            found = 0;
        }
    }
    else if (a == b[middle])
    {   
        found = 1;
    }
    else if (a < b[middle])
    {  
        recursivesearch(a, b, first, middle-1);
    }     
    else
    {
        recursivesearch(a, b, middle+1, last);
    }
    return;
}
 
bool search(int value, int values[], int n)
{
    recursivesearch(value, values, 0, n-1);
    return (found == 1);
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    int location = 0;
    for (int i = 0; i < n; i++)
        {
            printf ("%d ", values[i]);
        }
    printf("\n");
    for (int i = 0; i < n-1; i++)
    {
        int min = values[i];
        for (int j = i+1; j < n; j++)
        {
            if (values[j] < min)
            {
                min = values[j];
                location = j;
            }
        }
        if (min != values[i])
        {    
            int temp = values[i];
            values[location] = temp;
            values[i] = min;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf ("%d ", values[i]);  
    }
    printf("\n"); 
    return;
}
