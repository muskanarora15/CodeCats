#include<stdio.h>
void main()
{
    int size_arr,temp,i,j;
    printf("enter size of array");
    scanf("%d",&size_arr);
    int arr[size_arr];
    for(int i=0;i<size_arr;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size_arr;i++)
    {
        for(j=i+1;j<size_arr;j++)
        {
            if(arr[i]>arr[j])
            {
                temp= arr[i];
                arr[i] =arr[j];
                arr[j] = temp; 
            }
        }
    }
    printf("the largets elemnt in array %d\n",arr[size_arr-1]);
    printf("the smallest elmnt i array is %d\n",arr[0]);
}