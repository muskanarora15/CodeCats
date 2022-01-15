class Solution {
    public List<Integer> luckyNumbers (int[][] matrix) {
        List<Integer> list = new ArrayList<Integer>();
        int min=0,max,k;
        for(int i=0;i<matrix.length;i++)
        {min=matrix[i][0];
         max=0;
         k=0;
            for(int j=1;j<matrix[i].length;j++)
            { if(min>matrix[i][j]){
                min = matrix[i][j];
                    k=j;}}
            for( int c =0 ;c<matrix.length;c++)
            {if(max<=matrix[c][k])
                    max = matrix[c][k];
            }
            if(max== min){
                list.add(min);
                break;}
        }
        return list;
        
    }
}