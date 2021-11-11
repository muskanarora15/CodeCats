#include<stdio.h>
void main()
{
    int arr[5] = {1,2,3,4,5};
    int length,i;
    length = sizeof(arr)/sizeof(int);
    printf("th reverse of  array is\n");
    for(i=length-1;i>=0;i--)
    printf("%d\t",arr[i]);
}