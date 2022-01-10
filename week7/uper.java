public class uper {
    public static void main(String[] args) {
        int[][] mat  = {{1,2,3},{4,5,6},{7,8,9}};
        int i,j;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                if(j>=i)
                System.out.println(mat[i][j]);
            }
        }
    }
}
