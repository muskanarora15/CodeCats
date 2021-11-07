#include<stdio.h>
void main()
{ int i,count,te,g,n,dir,q,j;
printf("enter testcasse\n");
scanf("%d",&te);
printf("\nenter game played\n");
scanf("%d",&g);
    for(i=1;i<=te;i++)
    {
        for(j=1;j<=g;j++)
        {count=0;
                  printf("enter n ,q,i");
            scanf("%d%d%d",&n,&dir,&q);
            if(n==1)
            count=1;
            else if(n%2==0)
    count = n/2;
            else if(dir=1 && q==1 || dir==2 && q==2)
            count = (n-1)/2;
            else 
            count = (n+1)/2;
        }
        printf("%d",count);
    }
    
}