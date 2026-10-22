class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        vector<int> uniques;
        for (int num: nums){
            if (!find(uniques, num)) uniques.push_back(num);
        }
        return !(nums.size() == uniques.size());
    }
private:
    bool find(vector<int>& arr, int target){
        for (int num: arr){
            if (num == target) return true;
        }
        return false;
    }
};