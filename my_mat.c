#include <stdio.h>
#include "my_mat.h"

#define size 10
int arr[size][size];


int getMin(int i, int j)
{
    if (i < j) return i;
    else return j;
}

void getValues(int arr[][size])
{
    printf("Enter values for array: \n");
    for(int i=0; i<size; i++)
    {
      for(int j=0; j<size; j++)
      {
         scanf("%d", &arr[i][j]);
      }
    }
}


void floydWarshallAlgo(int arr[][size])
{
    int prev[size][size];
    for (int i = 0; i < size; i++) // deep copy of arr into prev for future work 
    {
        for (int j = 0; j < size; j++)
        {
            prev[i][j] = arr[i][j];
        }
    }


    int curr[size][size];

    for (int i = 0; i < size; i++) // deep copy of previous into current for future work 
    {
        for (int j = 0; j < size; j++)
        {
            curr[i][j] = prev[i][j];
        }
    }

    for (int k = 0; k < size; k ++) //Actual function
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                curr[i][j] = getMin(prev[i][j], prev[i][k] + prev[k][j]);
            }
        }
        
        for (int i = 0; i < size; i++) //deep copy of current into previous for future work
        {
            for (int j = 0; j < size; j++)
            {
                prev[i][j] = curr[i][j];
            }
        }
    }

    for (int i = 0; i < size; i++) // Updating arr to the new value
    {
        for (int j = 0; j < size; j++)
        {
            arr[i][j] = prev[i][j];
        }
    }
}

void pathExists(int i, int j, int arr[][size])
{
    floydWarshallAlgo(arr);
    if (arr[i][j] != 0) printf("True\n");
    else printf("False\n");
}

void shortestPath(int i, int j, int arr[size][size])
{
    floydWarshallAlgo(arr);
    int temp = arr[i][j];
    if (temp == 0) 
    {
        printf("-1\n");
    }
    else 
    {
        printf("%d\n", temp);
    }
}