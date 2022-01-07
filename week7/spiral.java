public class spiral {
    public static void main(String[] args) {
        int[][] mat  = {{1,2,3},{4,5,6},{7,8,9}};
        int i,j,f,l,g,c;
        j=0;
        int m = mat.length;
        int k = m/2;
        int t = m/2;
        while(k == m/2 && t == m/2)
        {
            for(i=0;i<m;i++)
            {
                System.out.println(mat[i][j]);
            }
            i--;
            j++;
            for(f = j;f<m;f++)
            {
                System.out.println(mat[i][f]);
            }
            l = i;
          
            m--;
            for(g= i-1;g>=0;g--)
            {
                System.out.println(mat[g][l]);
                
            }
            l--;
            g++;
            for(c =g;c<m;c++)
            {
                System.out.println(mat[c][l]);
            }
            k = c;
            t = l;
        }
    }
}
