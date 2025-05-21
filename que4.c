#include<stdio.h>

int main()
{
    int row,col,num1,num2,sum=0;

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

    printf("\n please enter number of row : ");
    scanf("%d", &num1);

    printf("\n element of %d row : ",num1);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(num1==i)
            {
                printf("%d ",a[i][j]);
                sum = sum + a[i][j];
            }
        }
        

    }

    printf("\n sum of row %d is :  %d",num1,sum);



    printf("\n please enter number of col : ");
    scanf("%d", &num2);
    sum = 0;
    printf("\n element of %d col : ",num2);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(num2==j)
            {
                printf("%d ",a[i][j]);
                sum = sum + a[i][j];
            }
        }
        

    }

    printf("\n sum of col %d is :  %d",num2,sum);


    return 0;
}