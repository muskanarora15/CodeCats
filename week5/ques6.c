#include<stdio.h>
void main()
{
    int n;
    printf("enter size of arry\n");
    scanf("%d",&n);
    int odd=0;
    int even=0;
    int arr[n],i;
    int *ptr = arr;
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr);
        ptr++;
 
    }
    ptr = &arr[0];
    for(i=0;i<n;i++)
    {
        if(((*ptr) & 1) ==1)
        odd = odd + *ptr;
        else
        even = even + *ptr;
        ptr++;
    }
    printf("sum of odd no is %d",odd);
    printf("\nsum of even no is %d\n",even);
}