/* #include<stdio.h>
 void main()
 {int index,i,j,flag,d;
    flag =1;
char word1[20] = "aaaa";
char word2[20] = "bccb";
int hash[128] ={0};
int hash1[128] = {0};
for(i=0;word1[i] !='\0';i++)
{
    index = word1[i];
    hash[index-'a']++;
 

}
for(j=0;word2[j] !='\0';j++)

{
    index = word2[j];
    hash1[index-'a']++;
    
}
for(j=0;word2[j] !='\0';j++)
{
    index = word2[j];
    if(hash[index -'a']== hash1[index - 'a'])
   continue;
   else{
       d = hash[index - 'a'] - hash1[index-'a'];
       if(d>3|| d<-3)
           continue;
       else
       {
           flag =0;
           break;
           
       }
       }

}

    if(flag==0)
       printf("false");
    else 
        printf("true");



}*/

#include<stdio.h>
void main()
{
    char str[20] = "aaaa";
    char *ptr = str;
    int hash[128]= {0};
    int i,index;
    for(i=0;str[i]!='\0';i++)
    {
        index = str[i];
        hash[index-'a']++;
        printf("%d",hash[index - 'a']);
    }
}




bool checkAlmostEquivalent(char * word1, char * word2){


int index,i,j,flag,d;
    flag =1;

int hash[128] ={0};
int hash1[128] = {0};
for(i=0;*word1 !='\0';i++)
{
    index = *(word1 +i);
    hash[index -'a']++;
    *word1++;

}
for(j=0; *word2 !='\0';j++)

{
    index = *(word2 +j);
    hash1[index-'a']++;
    *word2++;
}
for(j=0;*word2 !='\0';j++)
{
    index = *(word2+j);
    if(hash[index -'a']== hash1[index - 'a'])
   continue;
   else{
       d = hash[index - 'a'] - hash1[index-'a'];
       if(d>3|| d<-3)
           continue;
       else
       {
           flag =0;
           break;
           
       }
       }

}
    if(flag==0)
        return false;
    else 
        return true;



}