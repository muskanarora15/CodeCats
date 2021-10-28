#include<stdio.h>
 void main(){
int num,rem,i,c;
 unsigned long long int res,k;


printf("enter any number");
scanf("%d",&num);
 unsigned long long int a[num];
for(int i=1;i<=num;i++)
{
    scanf("%lld",&a[i]);
}
for(i=1;i<=num;i++)
{res =1;
    for(k=a[i];k>0;k--)
    {
        res =res *k;
        

    }
    rem=0;
    c=0;
    while(res>0)
    {
        rem = res%10;
        if(rem==0)
        c++;
        else
        break;
        res = res/10;
    }
    printf("%d\n",c);
}

}