#include<stdio.h>
void main()
{
    int arr[5] = {1,2,3,4,5};
    int sum =0,i;
    int  *ptr =arr;
    for(i=0;i<5;i++)
    {
        sum = sum + *(ptr +i);
    }
    printf("%d",sum);
}