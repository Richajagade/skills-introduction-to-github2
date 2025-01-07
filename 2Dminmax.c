#include<stdio.h>
#define rows 10
#define cols 10
int main()
{
    int i,j,rw,cl,max,min;
    int a[rows][cols];
    {
        Lb:printf("\nHow many rows and columns:");
        scanf("%d%d",&rw,&cl);
    }
    while((rw<=0||rw>rows)||(a<=0||cl>cl))
        printf("\nEnter elements:");
    for(i=0;i<rw;i++)
    {
        for(j=0;j<cl;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    min=max=a[0][0];
    for(i=0;i<rw;i++)
    {
        for(j=0;j<cl;j++)
        {
            if(a[i][j]>max)
                max=a[i][j];
        }
        if(a[i][j]<min)
            min=a[i][j];
    }
    printf("\nMaximum from an array = %d\nMinimum from an array =%d",max,min);
    return(0);
}
