class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int low = 0;
        int mid,flag =1;
        int count=0;
        int c=0;
        int high  = matrix.length -1;
        int lc = matrix[0].length-1;
        while(low<=high){
            mid = high + (low-high)/2;
            if(matrix[mid][0]<=target && matrix[mid][lc]>=target)
            {
                c =mid;
                flag=0;
                break;
            }
            else if(matrix[mid][0]<target)
            {
                low = mid+1;
            }
            else
                high = mid-1;
        }
       if(flag==1)
           c =-1;
        if(c==-1)
            return false;
        
            else
        {
                low = 0;
        high = matrix[0].length-1;
            while(low<=high)
            {
                mid = high + (low-high)/2;
                if(matrix[c][mid]==target)
                  
                    {
                        c = matrix[c][mid];
                        count=1;
                        break;}
                    
                else if(matrix[c][mid]>target)
                    high = mid-1;
                else
                {
                   low = mid+1;
                }
                
            }
            if(count==0)
                return false;
            else
                return true;
        }
        
    }
}