#include<stdio.h>
void main()
{
    int row,col;
    int i,j,k;
    row =5;
    col =9;
    for(int i=1;i<=row;i++)
    {
        for(j=col;j>=i;j--)
        printf(" ");
        for(k=1;k<(i*2);k++)
        printf("*");
        printf("\n");
    }

}