 #include<stdio.h>
 #include<stdlib.h>
 int gst(int);
 int buy(int,int,int);
 void create();
 struct item{
    int ino;
    char title[20];
    int MRP;
    int GST;
    int disc;
    int buy;
  
    
    
};

void main()
{
    create();
}
void create()
{
    FILE *outfile;
    int i=0;
   struct item input[10];

   // open Accounts file for writing
   outfile = fopen ("kids.txt","w");
   

   // instructions to user
   printf("Enter \"stop\" for First Name to end program.");

   // endlessly read from keyboard and write to file
   for(i=0;i<10;i++)
   {
       printf("\nFino: ");
      scanf ("%d", &input[i].ino);
       printf("title: ");
      scanf ("%s", input[i].title);
       printf("mrp  : ");
      scanf ("%d", &input[i].MRP);
      
       input[i].GST = gst(input[i].MRP);
       printf("Discount : ");
       scanf("%d",&input[i].disc);
       
       input[i].buy = buy(input[i].MRP,input[i].GST,input[i].disc);

       
       
   }
   fwrite (input, sizeof(struct item), 10, outfile);
   fprintf(outfile,"\n");
   

   
}

int gst(int m)
{
    if(m>500)
    return 18;
    else 
    return 0;
}
int buy(int m,int g,int d)
{
    int b;
g = (g*m)/100;
d  =(d*m)/100;
b = (m+g)-d;
return b;
}