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

#define LIMIT 65536
/**
 * Returns true if value is in array of n values, else false.
 */

// global variable required to pass between functions. 
bool bSearch(int a, int b[], int l, int u);

bool search(int value, int values[], int n)
{
    return bSearch(value, values, 0, n-1);
}

bool bSearch(int a, int b[], int l, int u)
{
    if(l <= u)
    {
        int mid = (l + u) / 2;
        if (a == b[mid])
        {
            return true;
        }
        else if (a < b[mid])
        {
            return bSearch(a, b, l, mid - 1);
        }
        else
        {
            return bSearch(a, b, mid + 1, u);
        }
    }
    else
    {
        return false;
    }
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    printf ("%i, %i\n", values[0], values[n-1]);

    // TODO implement sorting algorithm
    int count[LIMIT] = {0};

    // count the values in the array
	for (int i = 0; i < n; i++)
    {
    	if (values[i] < 0 || values[i] > LIMIT)
    	{
    	    return;
    	}
    	count[ values[i] ]++;
    }
    
    for (int i = 0, j = 0; j < n; i++)
	{
	    while (count[i] > 0)
	    {   
		    values[j] = i;
		    j++;
		    count[i]--;
	    }
	}
	
    // print result
    printf ("%i, %i\n ", values[0], values[n-1]);  
    return;
}
