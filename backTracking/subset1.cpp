class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> retList;
        backTracking(nums, temp, retList, 0);
        return retList;
    }
    
    void backTracking(vector<int> &nums, vector<int> &temp, vector<vector<int>> &retList, int start) {
        retList.push_back(temp);
        for(int i=start; i<nums.size(); i++) {
            temp.push_back(nums[i]);
            backTracking(nums, temp, retList, i+1);
            temp.erase(temp.end()-1);
        }
    }
};
