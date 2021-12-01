#include <stdio.h>
#include "my_mat.h"

int getMin(int i, int j)
{
    if (i < j) return i;
    else return j;
}


void getValues()
{
    for(int i=0; i<size; i++)
    {
      for(int j=0; j<size; j++)
      {
         scanf("%d", &arr[i][j]);
      }
    }
}


void floydWarshallAlgo()
{
    for (int s = 0; s < size; s++ )
    {
        for (int t = 0; t < size; t++ )
        {
            ans[s][t] = arr[s][t];
            if ( s != t && arr[s][t] == 0)
                ans[s][t] = MAX_VALUE;
        }
    }

    for (int k = 0; k < size; k++) //Actual function
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                ans[i][j] = getMin(ans[i][j], ans[i][k] + ans[k][j]);
            }
        }
    }
 }


void pathExists(int i, int j)
{
    floydWarshallAlgo();
    if (ans[i][j] != MAX_VALUE && i != j)
        printf("True\n");
    else
        printf("False\n");
}


void shortestPath(int i, int j)
{
    
    floydWarshallAlgo();
    int temp = ans[i][j];
    if (temp == MAX_VALUE || i == j)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n", temp);
    }
}


void printmat(int vec[size][size])
{
    for(int i = 0 ; i < size ; i++){
        for(int j = 0 ; j < size ; j++){
            printf("%2d ", vec[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
