class Solution {
    public int maximumWealth(int[][] accounts) {
      int m = accounts.length;
        int max=0;
      
        for( int i=0;i<m;i++)
        { int k=0;
            for(int j=0;j<accounts[i].length;j++)
            {
                
                k = k + accounts[i][j];
            }
            if(k>max)
            {
                max=k;
            }
}
        return max;
        
    }
}