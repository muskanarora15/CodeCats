#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

void filedata();
void info();
int found1(int);
void found(char*);
void form();
 void show();
void calc(int,int);
void cart(int,int);
void showcart();
void order();
int indexOf(FILE*,const char*,int*,int*);
 struct item{
    int ino;
    char title[20];
   
    int MRP;
    int GST;
    int disc;
    int buy;
};
struct item1{
    int ino;
    char title[20];
    int buy;
};
void main()
{
    
 system("cls");
    int log =0;
    
    int choice,p_no;
    
    
    char name[20],email_add[30],ps_wrd[20];
    printf("\t\t\t***********WELCOME TO SHOPPING APP***************\n");
    while(choice<5){
        
        if(log==0){
            
        printf("****************************************************************\n");
        printf("*\t\t\tENTER 1 FOR DISPLAY ITEMS             *\n");
        printf("*\t\t\tENTER 2 FOR SIGN UP                   *\n");
        printf("*\t\t\tENTER 3 FOR SIGN IN                   *\n");
        printf("*\t\t\tENTER 4 FOR CONTACT US                *\n");
        printf("*\t\t\tENTER 5 FOR EXIT                      *\n");
        
        printf("****************************************************************\n");
        }
        else{
            
        printf("*********************************************\n");
        printf("*MENU:                                      *\n");
        printf("*ENTER 1 FOR DISPLAY ITEMS                  *\n");
        printf("*ENTER 2 FOR CART                           *\n");
        printf("*ENTER 3 FOR SIGN OUT                       *\n");
        printf("*ENTER 4 FOR CONTACT US                     *\n");
        printf("*ENTER 5 FOR EXIT                           *\n");
        printf("*********************************************\n");
       
        }
    scanf("%d",&choice);
    switch(choice)
    {

        case 1:
        show(log);
        break;
       
        case 2:
        if(log==0)
        {
       
        printf("****************************************\n");
        printf("*           ENTER YOUR NAME            *\n");
        printf("*           ENTER YOUR PASSWORD        *\n");
        printf("*           ENTER YOUR EMAIL ADDRESS   *\n");
        printf("*           ENTER YOUR USERNAME        *\n");
        printf("****************************************\n");
        filedata();
        }
        else{
            showcart();
            break;
        }
     break;
     case 3:
     if(log==0){
         
        printf("-------------------------------------\n");
        printf("             ENTER YOUR USERNAME     \n");
        printf("             ENTER PASSWORD          \n");
        printf("-------------------------------------\n");
   log =  found1(log);
    
     }
     else{
     printf("****************LOG OUT SUCESSFULLY************\n");
     log =0;
     }
        break;
        case 4:
        info();
        break;
        case 5:
        remove("cart.txt");
        //choice = 6;
        break;
    
        
    }
    }
   
}
//------------------------------------------------------------------

void filedata()
    {
 system("cls");
         FILE *fp;
char name[20],email_add[30],ps_wrd[20],user_name[30];
fp = fopen("data.txt", "a");
 
   printf("ENTER NAME\n");
   fflush(stdin);          
   gets(name);
   fprintf(fp, "%s",name);
   fprintf(fp,"\n");
 
   printf("ENTER PASSWORD\n");
   gets(ps_wrd);
    fprintf(fp,"\n");
   fprintf(fp, "%s",ps_wrd);
    fprintf(fp,"\n");
 
   printf("ENTER EMAIL-ADDRESS\n");
   gets(email_add);
   fprintf(fp, "%s",email_add);
    fprintf(fp,"\n");
    printf("ENTER USERNAME\n");
   gets(user_name);
 
     fprintf(fp, "%s",user_name);
    fprintf(fp,"\n");
    char *word = user_name;
    found(user_name);

   fclose(fp);
   
    }


 void found(char *word)
{
    FILE *fptr;


   
   
    int line, col;
    
    fptr = fopen("data.txt", "r");

    indexOf(fptr, word, &line, &col);

    if (line != -1)
        printf("\t\t\t************Username already exist ,Try anothr username*********\n");
    else{
        
        printf("\t\t\t***********profile created sucessfully***********************\n");
        system("pause");
        

        
    }
    

    fclose(fptr);

    
}

int indexOf(FILE *fptr, const char *word, int *line, int *col)
{
    char str[100];
    char *pos;

    *line = -1;
    *col  = -1;

    while ((fgets(str, 100, fptr)) != NULL)
    {
        *line += 1;
        pos = strstr(str, word);

        if (pos != NULL)
        {
        
            *col = (pos - str);
            break;
        }
    }

    if (*col == -1)
        *line = -1;

    return *col;
}

//---------------------------------------------------------------------

 
//-------------------------------------------------------------
int found1(int log)
{
    
    FILE *fptr;
char word[50],ps_wrd[50];
printf("ENTER USERNAME\n");
scanf("%s",word);
printf("ENTER PASSWORD\n");
scanf("%s",ps_wrd);
   
   
    int line, col;
    
    fptr = fopen("data.txt", "r");

    indexOf(fptr, word, &line, &col);

    if (line != -1){
        printf("\t\t\t***********SIGN IN SUCESSFULLY*********\n");
        log =1;
    }
    else
        printf("\t\t\t***********NO SUCH USERNAME EXIST,PLEASE SIGN UP***********************\n");
    

    fclose(fptr);
    return log;

    
}

//-------------------------------------------------------------

void info()
{
    FILE *fptr;
  
    char  c;
  
    
    fptr = fopen("info.txt", "r");
    
    c = fgetc(fptr);
    while (c != EOF)
    {
        printf ("%c", c);
        c = fgetc(fptr);
    }
  printf("\n");
    fclose(fptr);
    
}

 //------------------------------------------------------------------ 
  void show(int log)
    {
       
system("cls");
        int choice1,choice2;
        
       
        printf("CHOOSE YOUR CATEGORY\n");
        printf("******************************\n");
        printf("*  1.    MEN'S FASHION       *\n");
        printf("*  2.    SPORTS SHOES        *\n");
        printf("******************************\n");
        printf("enter your choice\n");
        scanf("%d",&choice2);
             switch(choice2)
             {
                 case 1:
                 form(log,1);
                 break;
                 case 2:
                form(log,2);

             }
       

}


//-------------------------------------------------------------------
void form(int log,int j)

{
    system("cls");
    FILE *infile;
   struct item input[10];
   int n,n1,jn;
   
   

   if(j==1)
   infile = fopen ("men.txt","r");

   else 
   infile = fopen ("sport.txt","r");

printf("------------------------------------------------------------------------------------------------------------------\n");
 printf("Item no\t  TITLE\t             MRP \t            GST\t             DISCOUNT\t                BUY PRICE \n");
 
printf("------------------------------------------------------------------------------------------------------------------\n");

   
  printf("\n");
   
   fread (input, sizeof(struct item), 8, infile);
   
  for(int i=0;i<8;i++)
  
      printf ("%2d\t%6s\t%12d\t%15d\t%20d\t%25d\n",input[i].ino, input[i].title, input[i].MRP,input[i].GST,input[i].disc,input[i].buy);
              fclose(infile);
        printf("--------------------------------------------------------------------------------------------------------------\n");
        printf("PRESS 1 IF YOU WANT TO ENTER ITEM IN CART ELSE PRESS 2\n");

      scanf("%d",&jn);
      if(jn == 1)
        {
            if(log==1){
    printf("ENTER ITEM NO \n");
    scanf("%d",&n1);
    
    cart(n1,j);
            }
            else{
                
            printf("                    !!PLEASE SIGN IN TO YOUR ACCOUNT!!                 \n");
            printf("\n\n");
                    }
           
            
            
            }
}
    
   


//--------------------------------------------------------------
void cart(int n,int j)
{
   system("cls");
     FILE *infile;
     FILE *in;
   struct item input[10];

   if(j==1)
   infile = fopen ("men.txt","r");
   else 
   infile = fopen ("sport.txt","r");
   
  
  printf("\n");
   
   fread (input, sizeof(struct item), 10, infile);
   in = fopen("cart.txt","a");
    fprintf (in,"%2d\t%6s\t%12d\n",input[n-1].ino, input[n-1].title,input[n-1].buy);
    calc(input[n-1].buy,0);
    fclose(in);
              fclose(infile);


}

void calc(int m,int book)
{
static int calc =0;
    calc = calc +m;
    if( m!=0 && book==0){
    printf("*********************SUCESSFULLY ADDED TO CART************************\n");
    system("pause");
    }
   
    else{
        printf("\n\nTOTAL : %d\n",calc);
    }
}

 void showcart()
{
  system("cls");
     char ch;

     int cal=0,i,cho;
   FILE *fp;
   struct item1 input[1];

   fp = fopen("cart.txt", "r"); // read mode

 if(fp ==NULL)
 {
     printf("!!YOUR CART IS EMPTY!!\n");
 }
 else{
 printf("--------------------------------------------\n");
 printf("ITEM_NO\t   TITLE              BUY PRICE\n");
 printf("--------------------------------------------\n");
   while((ch = fgetc(fp)) != EOF)
    printf("%c", ch);
    calc(0,1);
    printf("FOR ORDER PRESS 1 ELSE PRESS 2\n");
 scanf("%d",&cho);
 if(cho ==1)
 order();

   fclose(fp);
 }

   fclose(fp);
   system("pause");
}   

void order(){
    
     struct item input[10];
   
    FILE *in;
    int n,total;
  
    int ch=1;
    in = fopen("cart.txt","r");
    while(ch == 1){
         printf("ENTER ITEM NO YOU WANT TO BUY\n");
          scanf("%d",&n);
          //printf("%d",input[n-1].buy);
    //total =total+ input[n-1].buy;
      printf("ENTER 1 FOR ORDER ONE OR MORE ITEM AND 2  FOR BUY NOW\n");
      scanf("%d",&ch);
    }
      fclose(in);
      
    printf("*********ORDERD PLACED SUCESSFULLY***********\n");
   
    remove("cart.txt");
    
    

}
