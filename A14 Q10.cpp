#include<stdio.h>
int main()
{
        int a[3][3],i,j,temp=0;
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
        for(i=1;i<=3;i++)
        {        temp=0;
                for(j=1;j<=3;j++)
                {
                   temp=a[i][j]>=a[i][j+1]?a[i][j]:a[i][j+1];
                   
                }
                printf("Greatest number in %d is %d",i,temp);
                printf("\n");
        }

}
