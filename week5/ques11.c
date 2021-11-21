#include<stdio.h>

void count(char*);
void main()
{
    char str[2100];
    gets(str);
    count(str);
}
void count(char *ptr)
{
    int vowel =0;
    int cons =0;
    while(*(ptr++) !='\0'){
    if(*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u')
    vowel++;
    else
    cons++;
    }
    printf("no of vowel are %d",vowel);
    printf("\n no of consonat are %d",cons);
}