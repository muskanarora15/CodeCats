#include<stdio.h>
void main()
{
    int x,j,i,t;
     printf("\nenter number of testcase\n");
   scanf("%d",&t);
 for(i=1;i<=t;i++){
 int m=1;
  printf("enter intial cordinate and number of jumps\n");
   scanf("%d\n%d",&x,&j);
  
    while(m<=j)
    {
        if(x&1)
        {
      x = x+m;
            m++;
             }
        else
        {
              x = x-m;
            m++;
           }
    }
    printf("\n final coordinate is %d\n",x);
}
}
