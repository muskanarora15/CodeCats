#include<stdio.h>
void main()
{
char str[20];
char str1[20];
int index,i,j;
printf("enter two string\n");
scanf("%s%s",&str,&str1);
int hash[128] ={0};
int hash1[128] = {0};
for(i=0;str[i]!='\0';i++)
{
    index = str[i];
    hash[index-'a']++;

}
for(j=0;str1[j]!='\0';j++)

{
    index = str1[j];
    hash1[index-'a']++;
}
for(j=0;str1[j]!='\0';j++)
{
    index = str1[j];
    if(hash[index -'a']== hash1[index - 'a'])
   continue;
   else
   printf("%c",str1[j]);

}


}