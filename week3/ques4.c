#include<stdio.h>
void main()
{
    int row,col;
    int i,j;
    row =9;
    col=9;
    for(int i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            if(i==j)
            printf("*");
            else if(col+1-i ==j)
            printf("*");
            else
            printf(" ");
           
        }
        printf("\n");
        }
       
    }

