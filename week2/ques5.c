#include<stdio.h>
void main(){
    int num,rem,sum;
    sum=0;
    printf("enter any number\n");
    scanf("%d",&num);
    while(num>0)
    {
        rem = num%10;
        sum = sum*10 +rem;
        num = num/10;
    }
    printf("the reverse of this number is %d",sum);
}