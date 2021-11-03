#include<stdio.h>
void main()
{
    int row,col,i,j;
    col=5;
    row=5;
    for(int i=1;i<=row;i++)
    {
        for(j=col;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}