class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int max=INT_MIN;
        int n=nums.size();
        int flag=0;
        int c;
        for(int i=0;i<=n-1;i++){
             for(int j=0;j<=n-1;j++){
                if(nums[i]==-nums[j]){
                   if(max<nums[i]){
                    max=nums[i];
                   }
                }
             }  
       }
       if(max>INT_MIN){
        return max;
       }
       else{
        return -1;
       }
    }
};
