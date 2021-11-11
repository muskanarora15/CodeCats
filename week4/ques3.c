#include<stdio.h>
void main()
{
    int n;
    printf("enter size of array");
    scanf("%d",&n);
    int arr[n];
    int k=3,i,c;
    int ans[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        printf("\n");
    }
    if(k>9)
    k = k%9;
    for(i=0;i<n;i++)
    {
        c = i;
        c = c+k;
        if(c>=n)
        c = c-n;
        ans[c] = arr[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d",ans[i]);
    }
}