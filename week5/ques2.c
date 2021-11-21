#include<stdio.h>
void swap(int*,int*);
void main()
{
    int num1 =6;
    int num2= 7;
    swap(&num1,&num2);
    printf("first no is %d\n",num1);
    printf("second no  is %d",num2);
}
 void swap(int *ptr1,int *ptr2)
 {
     int temp;
     temp = *ptr1;
     *ptr1 = *ptr2;
     *ptr2 = temp;
 }