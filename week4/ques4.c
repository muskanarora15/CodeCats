#include<stdio.h>
void main()
{
    int arr[10] = {1,2,3,4,5,6,7};
    int target = 9;
    int i,j;
    int ans[2];
    for(i=0;i<=9;i++)
    {
        for(j=i+1;j<=9;j++)
        {
            if(arr[i]+arr[j] == target){
            ans[0] = i;
            ans[1] =j;     
            break;
               }
         }
     }
     printf("[%d,%d]",ans[0],ans[1]);
}