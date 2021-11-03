#include<stdio.h>
void main()
{
    int n,i;
    int arr[6] = {1,2,1,3,1,1};
    int vis[6];
    for(i=0;i<6;i++)
    {
        vis[arr[i]]++;
    }
    for(i=0;i<6;i++)
    printf(" %d occurs %d times\n",arr[i],vis[arr[i]]);

}