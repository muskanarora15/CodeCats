#include<stdio.h>
void main()
{ int num,rem,sum,num1;
sum=0;

  
    printf("enter any numbr\n");
    scanf("%d",&num);
    num1 = num;
    while(num>0)
    {
        rem = num%10;
        sum = sum + (rem*rem*rem);
        num = num/10;
        
    }
 
    if(num1==sum)
    printf("the number is Armstrong");
    else
    printf("the numberr is not Armstrong");
}