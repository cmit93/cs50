/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    int first = values[0];
    int last=values[n-1];
    int middle=(first+last)/2;
    
    while(first>=last)
    {
        if(value<values[middle])
        {
            last=middle-1;
        }
        else if(value==values[middle])
        {
            return true;
        }
        else
        {
            first=middle+1;
        }
        middle=(first+last)/2;
    }
    if(first>last)
    {
        return false;
    }

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    int min;
    int temp;
    // TODO: implement an O(n^2) sorting algorithm
    for(int i=0;i<n-1;i++)
    {
    min=i;
    for(int j=i+1;j<n;j++)
    {
    if(values[j]<values[min])
    {
        min=j;
    }
    }
    if(min!=i)
    {
        temp=values[min];
        values[min]=values[i];
        values[i]=temp;
        
    }
    }
    return ;
}