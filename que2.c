#include<stdio.h>

int main()
{
    int row,col,max;

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

    max=a[0][0];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(max<a[i][j])
            {
                max=a[i][j];
            }
        }

    }

    printf("largest element is : %d",max);


    return 0;
}