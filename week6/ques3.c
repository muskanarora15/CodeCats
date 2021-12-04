#include<stdio.h> 


void main()
{
    char str[20],text[20];
    int i,j,k;
    j=0;
    int freq[126] = {0};
    printf("enter any string\n");
    scanf("%s",&str);
    printf("enter k\n");
    scanf("%d",&k);
        for(i=0;str[i]!='\0';i++)
    {
        freq[str[i] - 'a']++;
    }

    for(i=0;str[i]!='\0';i++)
    {
        if(freq[str[i]- 'a']>=k)
        {
            text[j] = str[i];
            j++;
        }
    }
    text[j] ='\0';
    printf("%s",text);
}