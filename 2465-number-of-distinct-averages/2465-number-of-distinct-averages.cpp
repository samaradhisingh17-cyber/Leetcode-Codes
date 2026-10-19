class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        vector<double> average;
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = nums.size()-1;
        while(i<j){
            average.push_back((nums[i] + nums[j]) / 2.0);
            i++, j--;
        }
        int count=1;
        sort(average.begin(), average.end());
        for(int i = 0 ; i < average.size()-1; i++){
            if(average[i] != average[i+1]){
                count ++ ;
            }
        }
        return count;
    }
};