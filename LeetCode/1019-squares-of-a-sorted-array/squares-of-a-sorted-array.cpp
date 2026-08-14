class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> temp;
        int z;
        for (int i = 0;i<nums.size();i++) {
            z = nums[i];
            z *= z; 
            temp.push_back(z);
        }
        sort(temp.begin(),temp.end());
        return temp;
    }
};