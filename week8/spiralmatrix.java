class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        List<Integer> list = new ArrayList();
        int s=0,t=0,b=0,i=0,e=0,h,c,l,p,j;
        int k = matrix[0].length;
        int u = matrix.length;
        int m = matrix.length-2;
        int r = matrix.length;
        int q = matrix[0].length;
        p=r*q;
               
       for(;e!=p;)
       {
           for(j=s;j<k && e!=p;j++){
           list.add(matrix[i][j]);
           e++;
           
           }
           c= i+1;
           j--;
           k--;
           for(l = i+1;l<u && e!=p;l++){
           list.add(matrix[l][j]);
           e++;
         
           }
           u--;
           l--;
           for(h= j-1;h>=t && e!=p;h--){
           list.add(matrix[l][h]);
           e++;

           }
           t++;
           h++;
           for(b=m;b>=c && e!=p;b--)
           {
               list.add(matrix[b][h]);
               e++;
           }
           m--;
           s =++h;
           
           i=++b;
          
           
          
    
        
        }
            
        
       return list;
    }
}