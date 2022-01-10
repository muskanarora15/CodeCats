public class traversal {
    public static void main(String[] args) {
        
        int[][] mat = {{1,2,3},{4,5,6},{7,8,9}};
        int i,j;
      i=1;
       int c =-1;
       
        while(i!=0 && c!=2)
        
        { i=0;
            c++;
            j =c;
            while(j<3)
            {
                System.out.println(mat[i][j]);
                i++;

                j++;
            }
            j++;
        }
    }
}
