#include<stdio.h>
void main()
{
    int row,col,i,j;
    row = 5;
    col = 5;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
         
        }
           printf("\n");
    }
}