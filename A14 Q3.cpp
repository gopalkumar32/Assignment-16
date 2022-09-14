#include<stdio.h>
int main()
{
        int a[3][3],i,j;
        for(i=1;i<=3;i++)
        for(j=1;j<=3;j++)
        scanf("%d",&a[i][j]);
        printf("Matirx are\n");
        for(i=1;i<=3;i++)
        {
                for(j=1;j<=3;j++)
                {
                        printf("%d ",a[i][j]);
                }
                printf("\n");
        }
        printf("now transpose of matirx are \n");
        for(j=1;j<=3;j++)
        {
                for(i=1;i<=3;i++)
                {
                        printf("%d ",a[i][j]);
                }
                printf("\n");
        }
}
