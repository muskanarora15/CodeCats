#include<stdio.h>
void main()
{
    char str[20];
    char text[20];
    int j=0;
    printf("enter string\n");
    scanf("%s",&str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i] == 'G')
        {
        text[j] = 'G';
        }
        else if(str[i]== '(' && str[i+1] == ')'){
        text[j] = 'o';
        i++;
        }
        else 
        {
            text[j] ='a';
            j++;
            text[j] = 'l';
            i+=3;
        }
        j++;
        
    }
    printf("your enter string is\n");
    printf("%s",text);
}