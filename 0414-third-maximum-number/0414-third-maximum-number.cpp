class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long flargest = LLONG_MIN; 
        long long slargest = LLONG_MIN; 
        long long tlargest = LLONG_MIN;
        int n = nums.size();

        for(int i=0; i<n; i++){
            if(nums[i] == flargest || nums[i] == slargest || nums[i] == tlargest)
                continue;
            if(nums[i] > flargest){
                tlargest = slargest;
                slargest = flargest;
                flargest = nums[i];
            }
            else if(nums[i] > slargest){
                tlargest = slargest;
                slargest = nums[i];
            }
            else if(nums[i] > tlargest){
                tlargest = nums[i];
            }
        }
        if(tlargest == LLONG_MIN){
            return flargest;
        }
        return tlargest;
    }

};