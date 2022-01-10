public class saddle {
    public static void main(String[] args) {
        int[][] mat = {{1,2,3},{4,5,6},{7,8,9}};
        int i,j,c,k,l,h;
        k=0;
     
        for(i=0;i<mat.length;i++)
        {
            c = mat[i][0];
            k =i;
            l =0;
            for(j=0;j<3;j++)
            {
                if(c>mat[i][j])
                {
                c = mat[i][j];
                k =i;
                l =j;
                }
            }
            System.out.println("sad" + c);
            for(h=0;h<3;h++)
            {
                if(c<mat[i][l])
                break;
                
                
            }
      
        }
        
        System.out.println(j);
      
    }
}
