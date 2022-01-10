import java.util.*;
public class basic {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[][] mat = new int[3][3];
        int i,j;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                mat[i][j] = sc.nextInt();
            }
        }

        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
               
                System.out.print(mat[i][j]);
            }
            System.out.println();
        }
    }
}
