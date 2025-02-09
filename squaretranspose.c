//prog to get transpose of square matrix without using a second matrix
#include<stdio.h>
#include<conio.h>
void main()
{
    int m[100][100];
    int n,i,j,temp;
    //row = col = n

    printf("enter the order of square matrix\n");
    scanf("%d",&n);

    printf("enter the matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }

    //doing the transpose 

    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            temp = m[i][j];
            m[i][j] = m[j][i];
            m[j][i] = temp;
        }
    }

    printf("the transpose of the matrix is\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
}
    