#include<stdio.h>
int fact(int*);
void main()
{
    int num1;
    num1=6;
    int c = fact(&num1);
    printf("%d",c);
}
int fact(int *ptr)
{ int res = 1;
if(*ptr == 0)
{
    return 1;
}
else{

 while(*ptr >=1)
    {
        res *= (*ptr);
      
        (*ptr)--;
    }
    return res;
}
}