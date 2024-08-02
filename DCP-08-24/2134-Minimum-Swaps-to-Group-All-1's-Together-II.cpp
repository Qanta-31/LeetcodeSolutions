class Solution {
    private:
    int countOnes(vector<int>&nums){
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        if(nums[i]==1)cnt++;
        return cnt;
    }
public:
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        int ones=countOnes(nums);
        int ans=0,zero=0;
        for(int i=0;i<ones;i++){
            if(nums[i]==0)zero++;
        }
        ans=zero;
        for(int i=1;i<n;i++){
            if(nums[i-1]==0)zero--;
            if(nums[(i+ones-1)%n]==0)zero++;
            ans=min(ans,zero);
        }
        return ans;
    }
};