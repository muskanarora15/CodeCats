class Solution {
    public boolean isToeplitzMatrix(int[][] matrix) {
        int i,j,k,l;
        for(i=0;i<matrix.length;i++)
        {
        for(j=0;j<matrix[0].length;j++)
        {
            if(j>=i){
            int c = matrix[i][j];
            k=i;
            l=j;
            while(k<matrix.length && l<matrix[0].length)
            {
                if(c != matrix[k][l])
                {
                  return false;
                }
                else{
                l++;
                 k++;
                    
                }
                    
            }
            }
        }
    }
        for(i=1;i<matrix.length;i++)
        {
            for(j=0;j<matrix[0].length;j++)
            {
                
            if(i>=j)
            {
                int c = matrix[i][j];
            k=i;
            l=j;
            while(k<matrix.length && l<matrix[0].length)
            {
                if(c != matrix[k][l])
                {
                  return false;
                }
                else{
                l++;
                 k++;
                    
                }
            }
            }

        }
    }
        return true;
}
}
