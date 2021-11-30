#include<stdio.h>
void main()
{
    char str[50];
    printf("entre no\n");
    scanf("%s",&str);
    int flag =-1;
   
   if(str[0] == '0')
   {
       flag =-2;
       
   }
   else{
    for(int i=1;str[i]!='\0';i++)
    {
        
        if(str[i] == '0')
        {
        
                    flag=0;
            break;
        }
    }
   }
    if(flag==0)
    printf("it is duck no\n");
    else
    printf("not a duck no\n");
}