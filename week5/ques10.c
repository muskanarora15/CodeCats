#include<stdio.h>
void main()
{
    char text[20] = "hello";
    char text1[20] = "hellw";
    int f=0;
    char *ptr = text;
    char *ptr1 = text1;
    while((*ptr) !='\0'||(*ptr1) !='\0')
    {
        if(*ptr != *ptr1)
        {
            f=1;
            break;
        }
        *ptr++;
        *ptr1++;
    }
    if(f==1)
    printf("unequal");
    else
    printf("equal");
    
}