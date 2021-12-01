#include <stdio.h>
#include "my_mat.h"

int arr[size][size];
int ans[size][size];


int main()
{
    char inp;
    scanf("%c", &inp);


    while(inp != 'D')
    {
        if (inp == 'A')
        {
            getValues();
        }
        int i;
        int j;
        if (inp == 'B')
        {
            scanf("%d %d", &i, &j);
            pathExists(i, j);
        }
        if (inp == 'C')
        {
            scanf("%d %d", &i, &j);
            shortestPath(i, j);
        }
        scanf("%c", &inp);
    }
    return 0;
}

