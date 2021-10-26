#include<stdio.h>
void main()
{
    float phy,chem,mat,bio,comp,per;
    printf("Enter number of each  subject\n");
    printf("Enter number of physiics\n");
    scanf("%f",&phy);
     printf("Enter number of mathemmatics\n");
     scanf("%f",&mat);
      printf("Enter number of chemisttry\n");
      scanf("%f",&chem);
       printf("Enter number of biology\n");
       scanf("%f",&bio);
        printf("Enter number of computer\n");
        scanf("%f",&comp);
        per = ((phy + chem+mat+bio+comp)/500)*100;
        if(per>=90)
        printf("the garde is A");
        else if(per>=80)
        printf("the grade is b");
        else if(per>=70)
        printf("the grade is C");
        else if(per>=60)
        printf("the grade is D");
        else if(per>=40)
        printf("the grade is E");
        else
        printf("the grade is F");



}