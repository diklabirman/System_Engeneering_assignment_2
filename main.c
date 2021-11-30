#include <stdio.h>
#include "my_mat.h"


int main()
{
    char inp;
    printf("Enter a letter:\n");
    scanf("%c", &inp);


    // getValues(arr);
    // for (int i = 0; i < size; i++)
    // {
    //     for (int j = 0; j < size; j++)
    //     {
    //         printf("%d\t", arr[i][j]);
    //     }
    //     printf("\n");
    // }

    int arr[size][size];

    while(inp != 'D')
    {
        if (inp == 'A')
        {
            getValues(arr);
        }
        int i;
        int j;
        if (inp == 'B')
        {
            printf("Enter indexes of matrix as desired, separated by space: \n");
            scanf("%d %d", &i, &j);
            pathExists(i, j, arr);
        }
        if (inp == 'C')
        {
            printf("Enter indexes of matrix as desired, separated by space: \n");
            scanf("%d %d", &i, &j);
            shortestPath(i, j, arr);
        }
        printf("Enter a letter: \n");
        scanf("%c", &inp);
    }
    return 0;
}