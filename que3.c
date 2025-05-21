#include<stdio.h>

int main()
{
    int row,col;

    printf("please enter the size of row : ");
    scanf("%d", &row);
    printf("please enter the size of col : ");
    scanf("%d", &col);

    int a[row][col];

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("a[%d][%d] : ",i,j);
            scanf("%d", &a[i][j]);
        }

    }

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");

    }

    


    return 0;
}