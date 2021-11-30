#include<stdio.h>
#include<string.h>

void main()
{
  char str[30];
  char str1[30];


  int i,index,j,c,count;
  count=0;
  scanf("%s",&str);

  scanf("%s",&str1);
    int k = strlen(str);
    int ans[k];
  for(i=0;str[i]!='\0';i++)
  {
    index = str[i];
    ans[i] = index-'a';
  }
  for(i=0;str[i]!='\0';i++)
  {

for(j=0;str1[j]!='\0';j++)
{ c = str1[j];
if(ans[i] == (c-'a') )
count++;
} 
 }
 printf("%d",count);
}