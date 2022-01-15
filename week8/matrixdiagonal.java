class Solution {
    public int diagonalSum(int[][] mat) {
        int k,i,j,m=mat.length,c=0,r;
        for(i=0;i<mat.length;i++)
        {
            for(j=0;j<mat.length;j++)
            {if(i==j){
                     k  = m-j-1;
             c = c+mat[i][k]+mat[i][j];
            }
                  }
        }
        if(m%2!=0){
            r = m/2;
            c = c-mat[r][r];}
        return c;
    }
}