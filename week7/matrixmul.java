class matrixmul
{
    public static void main(String[] args) {
        int[][] mat1 = {{1,2,1},{1,2,1},{1,1,1}};
        int[][] mat2 = {{1,1,1},{1,2,1},{1,1,1}};
        int[][] mat3 = new int[3][3];
        int i,j,l;

        for(i=0;i<3;i++)
        {
            int g=0;
            
            for(l=0;l<3;l++)
         

            {
               int h=0;
             
                for(j=0;j<3;j++)
                {
h=h + (mat1[i][j] *mat2[j][l]);


                }
                mat3[i][g] = h;
g++;
            }
        }
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                System.out.print(mat3[i][j]);
            
            }
            System.out.println("");
        }
    }
    
}