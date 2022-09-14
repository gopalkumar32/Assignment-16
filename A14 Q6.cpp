#include<stdio.h>
int main()
{
        int a[3][3],i,j,sum=0;
        for(i=1;i<=3;i++)
        for(j=1;j<=3;j++)
        scanf("%d",&a[i][j]);
        printf("Matirx are\n");
        for(i=1;i<=3;i++)
        {     
                sum=0;
                for(j=1;j<=3;j++)
                {
                        sum=sum+a[i][j];
                        
                }
                printf("sum of first %d row is %d ",i,sum);
                printf("\n");
        }
        printf("Now printf Sum of row\n");
        for(j=1;j<=3;j++)
        {       sum=0;
                for(i=1;i<=3;i++)
                {
                        sum=sum+a[i][j];
                }
                printf("Sum of %d is %d",j,sum);
                printf("\n");
                
        }

}
