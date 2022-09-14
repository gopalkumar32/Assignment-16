#include<stdio.h>
int main()
{
        int a[3][3],b[3][3],c[3][3],i,j,k;
        printf("Entre the first matrix value\n");
        for(i=1;i<=3;i++)
        for(j=1;j<=3;j++)
        scanf("%d",&a[i][j]);
        printf("Entre the second matrix of value\n");
        for(i=1;i<=3;i++)
        for(j=1;j<=3;j++)
        scanf("%d",&b[i][j]);
        for(i=1;i<=3;i++)
        {
                for(j=1;j<=3;j++)
                {
                        c[i][j]=0;
                        for(k=1;k<=j;k++)
                        {
                                c[i][j]+=a[i][k]*b[k][j];
                        }
                }
        }
        for(i=1;i<=3;i++)
        {
                for(j=1;j<=3;j++)
                {
                        printf("%d ",c[i][j]);
                }
                printf("\n");
        }
}
