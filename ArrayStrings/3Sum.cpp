class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++) {
            int target = -nums[i];
            int front = i +1;
            int back = nums.size() -1;
            
            while(front<back) {
                if(nums[front] + nums[back] == target) {
                    vector<int> t(3,0);
                    t[0] = nums[i];
                    t[1] = nums[front];
                    t[2] = nums[back];
                    res.push_back(t);
                    while(front<back && nums[front]==t[1]){
                    front ++;
                }
                while(front<back && nums[back]==t[2]){
                    back --;
                }
                }
                else if(nums[front] + nums[back] < target){
                    front ++;
                }
                else if(nums[front] + nums[back] > target) {
                    back --;
                }
                
            }
            while (i + 1 < nums.size() && nums[i + 1] == nums[i]) 
            i++;
        }
        return res;
    }
};
