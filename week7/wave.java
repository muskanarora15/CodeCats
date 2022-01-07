public class wave {
    public static void main(String[] args) {
        int[][] mat = {{1,2,3},{4,5,6},{7,8,9}};
        int i,j,k;
        k=1;
        for(j=0;j<3;j++)

    {
        if(k%2==0)
        {
            for(i=2;i>=0;i--)
            System.out.println(mat[i][j]);
            k++;
        }

        else{
            for(i=0;i<3;i++)
            {
                System.out.println(mat[i][j]);
            }
            k++;
        }
    }

        }
}

