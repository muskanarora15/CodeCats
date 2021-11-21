#include<stdio.h>
void main()
{
    int num1,num2;
    printf("enter two no\n");
    scanf("%d%d",&num1,&num2);
    int *ptr = &num1;
    int *ptr1 = &num2;
    int c = *ptr + *ptr1;
    printf("%d",c);
}