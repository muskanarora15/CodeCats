#include<stdio.h>
void main()
{
    int  arr[4] = {1,3,5,7};
    int start =0;
    int end = 3;
    int target = 0;
    int c=0;
    int mid;
    while(start<=end){
        mid = start + (end-start)/2;
        if(arr[mid]>target)
        {
            end = mid-1;
        }
        else if(target>arr[mid])
        {
            start = mid+1;
        }
        else
        {
            if(arr[mid]==target){
            printf("%d",mid);
            c=1;
            break;
            }
            else{
            printf("%d",mid+1);
            c=1;
            break;
            }
        }
        
    }
    if(c==0)
printf ("%d",start);

}