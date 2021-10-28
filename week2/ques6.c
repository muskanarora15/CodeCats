#include<stdio.h>
void main()
{
    int num,pow,i,result;
    result=1;
    printf("Enter the number\n");
    scanf("%d",&num);
    printf("enter the pow\n");
    scanf("%d",&pow);
    for(i=1;i<=pow;i++){
        result = result * num;
    }
    printf("the %d power of %d",pow,result);
}