class Solution {
    public int[][] matrixReshape(int[][] mat, int r, int c) {
        int k=0,i,j;
        List<Integer> list = new ArrayList<Integer>();
        int[][] ans = new int[r][c];
        for( i=0;i<mat.length;i++)
       {
            for( j=0;j<mat[i].length;j++)
list.add(mat[i][j]);
   }
        if(list.size()==r*c){
       for(i=0;i<r;i++)
        { 
           for(j=0;j<c;j++)
            {ans[i][j] = list.get(k);
                k++;
            }
        }return ans;
        }
        else   return mat;
}
}
