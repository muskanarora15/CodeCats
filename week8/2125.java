class Solution {
    public int numberOfBeams(String[] bank) {
        int i,j,count,sum;
        sum=0;
        int prev =0;
        for(i=0;i<bank.length;i++)
        {count=0;
            String c = bank[i];
        
            for(j=0;j<c.length();j++)
            {
                if(c.charAt(j)=='1')
                {
                    count++;
                   
                }
            }
       
            if(count!=0)
            {
                 
                if(prev!=0){
            
            
            sum += count*prev;
                    prev = count;
                }
                else
                {
                    prev = count;
                }
        }
        }
        return sum;
    }
}