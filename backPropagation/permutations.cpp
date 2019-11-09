class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> resList;
        backPropagate(nums, temp, resList);
        return resList;
    }
    
    void backPropagate(vector<int>& nums, vector<int>& temp,vector<vector<int>> &resList) {
        if(temp.size() == nums.size()) {
            resList.push_back(temp);
        }
        else {
            for(int i = 0; i<nums.size(); i++) {
                //cout<<nums[i]<<endl;
                if(find(temp.begin(), temp.end(), nums[i]) != temp.end())
                    continue;
                temp.push_back(nums[i]);
                backPropagate(nums, temp, resList);
                temp.erase(temp.end()-1);
            }
        }
    }
};
