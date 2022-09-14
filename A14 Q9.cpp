#include<stdio.h>
int main()
{
        int a[3][3],i,j,count=0;
        printf("Entre the value of matrix\n");
        for(i=0;i<=3;i++)
        for(j=1;j<=3;j++)
        scanf("%d ",&a[i][j]);
        for(i=1;i<=3;i++)
        {
                for(j=1;j<=3;j++)
                {
                        printf("%d ",a[i][j]);
                }
                printf("\n");
        }
        for(i=1;i<=3;i++)
        {
                for(j=1;j<=3;j++)
                {
                        if(a[i][j]==0)
                        count++;
                }
        }
        if(count>9/2)
        printf("Given matirx are sparse matirx\n");
        else
        printf("Given matrix are not sparse matrix");
}
