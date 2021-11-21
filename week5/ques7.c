#include<stdio.h>
void main()
{
    int arr[6] = {234,46,34,1,56,3};
    int *ptr = arr;
    int i,j,temp;
    for(i=0;i<6;i++)
    {
        for(j=i+1;j<6;j++)
        {
            if(*(ptr +i)> *(ptr +j))
            {
                temp = *(ptr +i);
                *(ptr +i) = *(ptr +j);
                *(ptr +j) = temp;
                            }
    }
    }
    ptr = &arr[0];
    printf("sorted array is\n");
    for(i=0;i<6;i++)
    {
        printf(" [%d]\n", *(ptr +i));
    }
}