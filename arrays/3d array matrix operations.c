#include <stdio.h>

int main()
{
    int a[2][2][2] = {
        {{1, 2}, {3, 4}},
        {{5, 6}, {7, 8}}
    };
    int i, j;

    printf("Matrix 1 + Matrix 2 =\n");

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%d ", a[0][i][j] + a[1][i][j]);
        }
        printf("\n");
    }

    return 0;
}
