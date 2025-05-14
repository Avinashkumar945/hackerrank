class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
        int n=nums.size();
        int sumodd=0;
        int sumeven=0;
  // by first loop I calculate the initial even sum and odd sum
        for(int i=0;i<=n-1;i++){
            if(i%2==0){
               sumeven=sumeven+nums[i];
            }
            else{
               sumodd=sumodd+nums[i];
            }
        }
         int count=0;
        // by second loop we came to understand that how evensum is and oddsum is updating by observation that even postion after the index and the odd position after the index is interchange and before it as itis  so if deleting index is in even postion it affect the oddsum and if odd positio it affect even sum
        for(int i=0;i<=n-1;i++){
  
            if(i==0){
                int temp=sumeven;
                sumeven =sumodd;
               sumodd=temp-nums[i];
            }
            else{
                if(i%2==0){
                sumeven=sumeven;
                sumodd=sumodd-nums[i]+nums[i-1];
                }
                else{
                    sumeven=sumeven-nums[i]+nums[i-1];
                    sumodd=sumodd;
                }
            }
            if(sumodd==sumeven){
                count++;
            }
        }
          return count;
        }
        
    
};
