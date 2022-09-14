#include<stdio.h>
int main()
{
        int i,j,a[3][3],sum=0;
        printf("Entre the value of array\n");
        for(i=1;i<=3;i++)
        for(j=1;j<=3;j++)
        scanf("%d",&a[i][j]);
        printf("Now matrix look like\n");
        for(i=1;i<=3;i++)
        {
                for(j=1;j<=3;j++)
                printf("%d  ",a[i][j]);
                printf("\n");
        }
        sum=a[1][3]+a[2][2]+a[3][1];
        printf("Sum of right digonal matrix is %d",sum);
}
