public class rotatate {
    public static void main(String[] args) {
        int[][] mat = {{1,2,3},{4,5,6},{7,8,9}};
        int[][] mat1 = new int[3][3];
        int i,j,l;
     l = mat.length -1;
        
       
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                mat1[j][l] = mat[i][j];
                 
            }
            l--;
        }

        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                System.out.print(mat1[i][j]);
            }
            System.out.println();
        }
    }

}
