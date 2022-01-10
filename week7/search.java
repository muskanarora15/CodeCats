

public class search {
 public static void main(String[] args) {
     int[][] mat = {{11,12,13,14},{20,21,22,23},{30,31,32,33}};
     int i=0;
     int c,x;
     c =0;
     x =30;
     int j = mat[0].length-1;
     while(i<mat.length && j>=0)
     {
         if(x == mat[i][j])
         {
             System.out.println(i);
             System.out.println(j);
             c =1;
             break;

         }
         else if(x>mat[i][j])
         {
i++;
         }
         else 
         j--;

     }
     if(c!=1)
     System.out.println("not found");
     }   
}
