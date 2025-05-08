class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int tsum=0;
        int n=nums.size();
        for(int i=0;i<=n-1;i++){
            tsum = tsum+nums[i];
        }
        int lsum=0;
        int rsum=0;
        int count=0;
        int diff=0;
        for(int i=0;i<=n-2;i++){
            rsum=0;
            lsum=lsum+nums[i];
            rsum=tsum-lsum;
            diff=rsum-lsum;
           if(diff%2==0){
            count++;
           }
        }
        return count;
    }
};
