#include<stdio.h>
void main()
{
    int num,fac;
    fac=1;
    printf("enter the number\n");
    scanf("%d",&num);
    for(int i=num;i>0;i--)
    {
        fac = fac *i;
    }
    printf("factorial of nnumber is %d\n",fac);
    }