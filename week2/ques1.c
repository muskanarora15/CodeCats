#include<stdio.h>
void main()
{
    int i,num,sum,even,odd;
    sum=0;
    even=0;
    odd=0;
    printf("enter any number upto which you want to print natural number\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        printf("%d\n",i);
        sum = sum+i;
        if(i &1)
     odd = odd+i;

        else
     even = even+i;
    }
    printf("sum of %d natural number are %d\n",num,sum);
    printf("sum of even number are %d\n",even);
    printf("sum of odd numbers %d\n",odd);
}