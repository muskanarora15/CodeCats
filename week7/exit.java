

public class exit {
    public static void main(String[] args) {
        int[][] mat = {{0,0,1,0},{1,0,0,0},{0,0,0,0},{1,0,1,0}};
        int i=0,j=0;
        int m = 4;
        char c = 'R';
        while(i>=0 && i<m && j>=0 && j<m)
        {
            if(mat[i][j]==0)
            {
                if(c == 'R')
                j++;
                else if(c=='D')
                i++;
                else if(c == 'L')
                j--;
                else 
                i--;
            }
            else 
            {
                if(c == 'R')
                {
                    i++;
                    c ='D';
                }
                else if(c == 'D')
                {
                    j--;
                    c = 'L';
                }
                else if(c =='L')
                {
                    i--;
                    c = 'U';
                }
                else 
                {
                    j++;
                    c = 'R';
                }
            }
          
        }
       if(i<0 || j<0)
       {
           if(i<0)
           i++;
           else j++;
       }
       else if(i>=m || j>=m)
       {
if(i>=m)
i--;
else j--;
       }
      
       
        System.out.println(i+ " " +j);
        
    }
}
