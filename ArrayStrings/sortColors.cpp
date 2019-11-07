class Solution {
public:
    void sortColors(vector<int>& nums) {
        //OnePass
        int mid, low = 0;
        int high = nums.size()-1;
        
        while(mid<high) {
            if(nums[mid]==0){
                //swap(nums[mid], nums[low]);
                int temp = nums[mid];
                nums[mid] = nums[low];
                nums[low] = temp;
                mid++; low++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else if(nums[mid]==2){
                //swap(nums[mid], nums[high]);
                int temp = nums[mid];
                nums[mid] = nums[high];
                nums[high] = temp;
                high--;
            }
            //for(int i=0; i<nums.size(); i++)
            //   cout<<nums[i]<<" ";
        }
    }
};
