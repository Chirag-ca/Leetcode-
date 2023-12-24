class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector <int>ans; vector<int>nums2;
        for(int i = n; i < 2*n; i++){
            nums2.push_back(nums[i]);
        }
        for(int i = 0; i < n; i++){
            ans.push_back(nums[i]);
            ans.push_back(nums2[i]);
        }
        return ans;
    }
};