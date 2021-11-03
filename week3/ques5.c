#include<stdio.h>
void main()
{
    int n,sum1,sum2,sum,i,sum3,sum4;
    sum1=0;
    sum2=0;
    sum=0;
    sum3=0;
    sum4=0;
    printf("enter size of array\n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        sum+= +arr[i];
        if(i%2==0)
        sum1+= arr[i];
        else
        sum4+=arr[i]; 
 if(arr[i]%2==0)
        sum2+=arr[i];
        else
        sum3+=arr[i];
           }
           printf("sum of all elemnt in array is %d\n",sum);
           printf("sum of even no of elemnt %d\n",sum2);
           printf("sum of odd nno of elemnt %d\n",sum3);
           printf("sum of elemnt at odd pos %d\n",sum4);
           printf("sum of elemnt at even pos %d\n",sum1);
}