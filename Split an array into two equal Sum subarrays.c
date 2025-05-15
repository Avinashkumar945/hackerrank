class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        int n=arr.size();
        int tsum=0;
        int count=0;
       for(int i=0;i<=n-1;i++){
           tsum=tsum+arr[i];
       }
       int sum=0;
       int j=0;
       int diff=0;
      diff=tsum/2;
      while(sum<diff){
            sum=sum+arr[j];
            j++;
        }
        int rsum=0;
        for(int k=j;k<=n-1;k++){
         rsum=rsum+arr[k];
        }
        if(sum==rsum){
           return true;
        }
        else {
            return false;
        }
    }
};
