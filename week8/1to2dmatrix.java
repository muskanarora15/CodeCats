class Solution {
    public int[][] construct2DArray(int[] original, int m, int n) {
        int[][] mat = new int[m][n];
        int k=0;
        int i,j;
        int l  =m*n;
        if(l==original.length)
        {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                mat[i][j] = original[k];
                k++;
            }
        }
        return mat;
        }
        else
            return new int[0][0];
    }
}