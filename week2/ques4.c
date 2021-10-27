#include<stdio.h>
void main()
{int c,num,i;
c=0;
    printf("enter any number\n");
    scanf("%d",&num);
    for(i=2;i<num/2;i++)
    {
        if(num%i==0){
            c=1;
            break;
          
        }
    }
    if(c==1)
    printf("the number is not prime");
    else
    printf("the number is prime");
}