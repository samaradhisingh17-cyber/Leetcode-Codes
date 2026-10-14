class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mn=nums[0], mx=nums[0];
        for(int i=0; i<nums.size(); i++){
            mx=max(mx, nums[i]);
            mn=min(mn, nums[i]);
        }
        int ans=1;
        for(int i=1; i<=mx; i++){
            if(mn%i==0 && mx%i==0){
                ans=i;
            }
        }
        return ans;
    }
};