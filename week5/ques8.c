#include<stdio.h>

void main()
{
 char text[20] = "hello world";
 char text1[20];
 char *ptr1 = text1;
 char *ptr = text;
 while(*(ptr1++) = *(ptr++));
 printf("%s",text1);

}