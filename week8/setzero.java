
    class Solution {
        public void setZeroes(int[][] matrix) {
             int b = matrix.length;
            int c = matrix[0].length;
            int[][] ans =new int[b][c];
            int i,k,j,m,a,l;
            for(i=0;i<matrix.length;i++)
            { for(j=0;j<matrix[i].length;j++)
                 ans[i][j]  =matrix[i][j];}
                 for(i=0;i<b;i++)
            {
                for(j=0;j<c;j++)
                { 
                    if(ans[i][j]==0)
                    {a =j;
                     k=i;
                        for(l=0;l<b;l++)
                            matrix[l][a]=0;
                     for(m=0;m<c;m++ )
                         matrix[k][m] = 0;
                    }
                }
            }
           
            
       
        }
    }

