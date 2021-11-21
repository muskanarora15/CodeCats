#include<stdio.h>
void main()
{
    int arr[5] = {1,2,3,4,5};
    int *ptr = arr;
    int i;
    printf("elemnt of arrray are\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",*(ptr +i));

    }
}