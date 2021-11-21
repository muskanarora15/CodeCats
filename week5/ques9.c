#include<stdio.h>
void main()
{
    char text[20] = "hello";
    char text1[20] = "world";
    char *ptr = text;
    char *ptr1 = text1;
    while(*(ptr++)!='\0');
    *ptr--;
    while(*(ptr++) = *(ptr1++));
    *ptr = '\0';
    printf("%s",text);
}