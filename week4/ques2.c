#include<stdio.h>
void main()
{
    int arr[10] = {10,101,10,20,20,4,56,1,4,10};
    int freq[10];
    
    int i,j,count;
  
    int nums[10];
   for(i=0;i<=9;i++)
   {
       freq[i] = -1;
     
   }
    for(i=0;i<=9;i++)
    {count=1;
   
        for(j = i+1;j<=9;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                freq[j] =0;

            }
        }
        if(freq[i]!=0)
        freq[i] = count;
    }
    
    for(i=0;i<=9;i++)
    {
     if(freq[i]!=0)
        printf("%d occurs %d times\n",arr[i],freq[i]);
    }
 
}