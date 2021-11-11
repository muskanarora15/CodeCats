#include<stdio.h>

void main()
{
    int arr[9] = {2,0,0,0,2,2,1,1,0};
    int low=0,high = 8;
    int i,temp;
    int mid = 0;
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
          temp  = arr[mid];
          arr[mid] = arr[low];
          arr[low] = temp;
            low++;
            mid++;
        }
        else if(arr[mid]==1)
        {
mid++;
        }
        else{
           
            temp  = arr[mid];
          arr[mid] = arr[high];
          arr[high] = temp;
            high--;
        }
    }
    for(i=0;i<9;i++)

{
    printf("[%d]",arr[i]);
}    
}
